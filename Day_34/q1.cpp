#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* oddEvenList(ListNode* head) {
    if (!head || !head->next) return head;

    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = even;

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    if (n <= 0) return 0;

    int value;
    cout << "Enter the values of the nodes: ";
    cin >> value;

    ListNode* head = new ListNode(value);
    ListNode* current = head;

    for (int i = 1; i < n; ++i) {
        cin >> value;
        current->next = new ListNode(value);
        current = current->next;
    }

    head = oddEvenList(head);
    cout << "Reordered list: ";
    printList(head);

    return 0;
}
