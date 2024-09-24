#include <iostream>
using namespace std;

class PriorityQueue {
    int* arr;
    int size;
    int capacity;

public:
    PriorityQueue(int cap) {
        capacity = cap;
        size = 0;
        arr = new int[capacity];
    }

    void insert(int value) {
        if (size == capacity) {
            cout << "Queue is full" << endl;
            return;
        }
        arr[size] = value;
        size++;
    }

    void deleteMax() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        int maxIndex = 0;
        for (int i = 1; i < size; i++) {
            if (arr[i] > arr[maxIndex]) {
                maxIndex = i;
            }
        }
        for (int i = maxIndex; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    int getMax() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int maxValue = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > maxValue) {
                maxValue = arr[i];
            }
        }
        return maxValue;
    }
    bool isEmpty() {
        return size == 0;
    }
};
int main() {
    PriorityQueue pq(5);
    pq.insert(10);
    pq.insert(30);
    pq.insert(20);
    pq.insert(50);
    pq.insert(40);
    cout << "Max Element: " << pq.getMax() << endl;
    pq.deleteMax();
    cout << "Max Element after deletion: " << pq.getMax() << endl;

    return 0;
}
