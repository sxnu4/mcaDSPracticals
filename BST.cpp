#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class binarySearchTree {
    private:
        Node* root;
    public:
        binarySearchTree() {
            root = NULL;
        }
        Node* insert(Node* root, int data) {
            if (root == NULL) {
                return new Node(data);
            }
            if (root->data > data) {
                root->left = insert(root->left, data);
            } else if (root->data < data) {
                root->right = insert(root->right, data);
            }
            return root;
        }
        void inOrder(Node* root) {
            if (root == NULL) {
                return;
            }
            inOrder(root->left);
            cout << root->data << " ";
            inOrder(root->right);
        }
        void insert(int data) {
            root = insert(root, data);
        }
        void inOrder() {
            inOrder(root);
        }
        Node* inOrderPredecessor(Node* root){
            root = root->left;
            while(root != NULL && root->right != NULL) {
                root = root->right;
            }
            return root;
        }
        Node* deleteNode(Node* root, int data){
            if (root == NULL) {
                return NULL;
            }
            if (root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            }
            if (data < root->data) {
                root->left = deleteNode(root->left, data);
            } else if (data > root->data) {
                root->right = deleteNode(root->right, data);
            } else {
                if (root->left == NULL) {
                    Node* temp = root->right;
                    delete root;
                    return temp;
                } else if (root->right == NULL) {
                    Node* temp = root->left;
                    delete root;
                    return temp;
                }

                Node* inPre = inOrderPredecessor(root);
                root->data = inPre->data;
                root->left = deleteNode(root->left, inPre->data);
            }
            return root;
        }
        void deleteNode(int data) {
            root = deleteNode(root, data);
        }
        Node* searchNode(Node* root, int data){
            if (root == NULL || root->data == data) {
                return root;
            }
            if (root->data > data) {
                return searchNode(root->left, data);
            }
            return searchNode(root->right, data);
        }
        bool search(int data) {
            return searchNode(root, data) != NULL;
        }
};

int main() {
    binarySearchTree tree;
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

    cout << "Enter the value you want to delete: ";
    int dvalue;
    cin >> dvalue;
    tree.deleteNode(dvalue);

    cout << "In-order traversal after deletion: ";
    tree.inOrder();
    cout << endl;

    cout << "Enter the value you want to search: ";
    int svalue;
    cin >> svalue;
    if (tree.search(svalue)) {
        cout << svalue << " is present in the tree." << endl;
    } else {
        cout << svalue << " is not present in the tree." << endl;
    }

    return 0;
}
