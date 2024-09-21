#include <iostream>
using namespace std;

class Stack {
    int top;
    int arr[100]; 

public:
    Stack() {
        top = -1;
    }

    void push(int val) {
        if (top >= 99) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = val;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << endl;

    stack.pop();
    cout << "Top element after pop: " << stack.peek() << endl;

    return 0;
}
