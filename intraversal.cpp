#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
Node *getNode(int val)
{
    Node *newNode;
    newNode->data=val;
    newNode->left=nullptr;
    newNode->right=nullptr;
    return newNode;
}
Node *insertNode(Node *root, int data)
{
    if (root == nullptr)
    {
        return getNode(data);
    }
    if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}
// Function to perform inorder traversal
void postorderTraversal(Node *root)
{

    // suppose if our tree is null then this case occurs
    if (root == nullptr)
        return;

    cout << root->data << " ";

    postorderTraversal(root->left);

    postorderTraversal(root->right);
}
void preorderorderTraversal(Node *root)
{

    // suppose if our tree is null then this case occurs
    if (root == nullptr)
        return;

    preorderorderTraversal(root->left);

    preorderorderTraversal(root->right);
    cout << root->data << " ";
}
void inorderTraversal(Node *root)
{

    // suppose if our tree is null then this case occurs
    if (root == nullptr)
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";

    inorderTraversal(root->right);
}

int main()
{
    int n, val, data;
    Node *root = nullptr;
    int choice;
    char ch;
    // Default input
    // Node *root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);

    // User Input

    // cout << "Enter the number of nodes: ";
    // cin >> n;

    // cout << "Enter the node values:\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> data;
    //     // root =
    //     root = insertNode(root, data);
    // }
    do
    {
        cout << "\nChoose any of the options which you wanna perform" << endl;
        cout << "\t1. Insert new Node in Binary tree:: " << endl;
        cout << "\t2. Inorder Traversal " << endl;
        cout << "\t3. Preorder Traversal " << endl;
        cout << "\t4.Postorder Traversal " << endl;
        cout << "Enter your choice what you wanna perform : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value of the node you wanna insert: ";
            cin >> val;
            break;
        case 2:
            inorderTraversal(root);
            break;

        case 3:
            preorderorderTraversal(root);
            break;

        case 4:
            postorderTraversal(root);
            break;

        default:
            cout << "Wrong choice buddy!!!";
            break;

            cout << "\t Do you wanna continue? (y/n)";
            cin >> ch;
        }
    } while (ch == 'Y' || ch == 'y');
    return 0;
}
