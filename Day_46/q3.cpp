#include <iostream>
#include <limits.h>

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int findMax(Node* root) {
    if (root == nullptr) return INT_MIN;
    return std::max(root->data, std::max(findMax(root->left), findMax(root->right)));
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    
    std::cout << "Maximum value: " << findMax(root) << std::endl;
    
    return 0;
}
