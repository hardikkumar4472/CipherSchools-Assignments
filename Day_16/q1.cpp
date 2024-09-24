#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void insertSorted(int val) {
        Node* newNode = new Node(val);
        if (!head || head->data >= val) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next && current->next->data < val) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data;
            if (temp->next) std::cout << "->";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;
    int n, value;
    std::cout << "Enter number of elements in the sorted linked list: ";
    std::cin >> n;
    std::cout << "Enter elements in sorted order:" << std::endl;
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        list.insertSorted(val);
    }
    std::cout << "Enter value to insert: ";
    std::cin >> value;
    list.insertSorted(value);
    std::cout << "Updated List: ";
    list.display();
    return 0;
}
