#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    bool hasCycle() {
        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }

    void createCycle(int pos) {
        if (pos == -1) return;
        Node* temp = head;
        Node* cycleNode = nullptr;
        int idx = 0;

        while (temp->next != nullptr) {
            if (idx == pos) {
                cycleNode = temp;
            }
            temp = temp->next;
            idx++;
        }

        temp->next = cycleNode;
    }
};

int main() {
    LinkedList list;
    list.insert(3);
    list.insert(2);
    list.insert(0);
    list.insert(-4);

    int pos = 1;
    list.createCycle(pos);

    if (list.hasCycle()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
