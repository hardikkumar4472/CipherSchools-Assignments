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

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteValue(int val) {
        Node* temp = head;
        Node* prev = nullptr;
        if (temp != nullptr && temp->data == val) {
            head = temp->next;
            delete temp;
            return;
        }
        while (temp != nullptr && temp->data != val) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == nullptr) return;
        prev->next = temp->next;
        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data;
            if (temp->next != nullptr) std::cout << "->";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    std::cout << "Original List: ";
    list.display();
    int valueToDelete = 20;
    list.deleteValue(valueToDelete);
    std::cout << "Updated List after deleting " << valueToDelete << ": ";
    list.display();
    return 0;
}
