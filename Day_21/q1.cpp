#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    void insertAtEnd(int val) {
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
        newNode->prev = temp;
    }

    void insertAtPosition(int pos, int val) {
        Node* newNode = new Node(val);
        if (pos == 0) {
            newNode->next = head;
            if (head != nullptr) {
                head->prev = newNode;
            }
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 0; i < pos - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position out of range\n";
            return;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtEnd(2);
    dll.insertAtEnd(4);
    dll.insertAtEnd(5);

    int p = 2, x = 6;
    dll.insertAtPosition(p + 1, x);

    dll.printList();

    return 0;
}
