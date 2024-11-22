#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree {
private:
    Node* root;

public:
    BinaryTree() {
        root = NULL;
    }

    Node* insert(Node* node, int data) {
        if (node == NULL)
            return new Node(data);
        
        if (data < node->data) {
            node->left = insert(node->left, data);
        } else {
            node->right = insert(node->right, data);
        }
        
        return node;
    }

    void insert(int data) {
        root = insert(root, data);
    }

    void preOrder(Node* node) {
        if (node == NULL)
            return;
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void inOrder(Node* node) {
        if (node == NULL)
            return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

    void postOrder(Node* node) {
        if (node == NULL)
            return;
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }

    void preOrder() {
        preOrder(root);
    }

    void inOrder() {
        inOrder(root);
    }

    void postOrder() {
        postOrder(root);
    }
};

int main() {
    BinaryTree tree;
    int size;
    cout << "How many nodes you wanna insert? : ";
    cin >> size;
    int val;
    for (int i = 0; i < size; i++) {
        cout << "Enter the value of node " << i + 1 << ": ";
        cin >> val;
        tree.insert(val);
    }

    cout << "In-order traversal of the tree: ";
    tree.inOrder();
    cout << endl;

    cout << "Pre-order traversal of the tree: ";
    tree.preOrder();
    cout << endl;

    cout << "Post-order traversal of the tree: ";
    tree.postOrder();
    cout << endl;

    return 0;
}
