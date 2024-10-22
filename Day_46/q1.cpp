#include <iostream>
#include <algorithm>

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int height(Node* root) {
    if (root == nullptr) return -1;
    return 1 + std::max(height(root->left), height(root->right));
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    std::cout << "Height of the tree: " << height(root) << std::endl;
    
    return 0;
}
