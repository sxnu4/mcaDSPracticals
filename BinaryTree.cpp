#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
class Binarytree
{
private:
    Node *root;

public:
    Binarytree()
    {
        root = NULL;
    }
    void insert(int val)
    {
        Node *new_node = new Node(val);
        if (root == NULL)
        {
            root = new_node;
            return;
        }
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left == NULL)
            {
                temp->left = new_node;
                return;
            }
            else
            {
                q.push(temp->left);
            }
            if (temp->right == NULL)
            {
                temp->right = new_node;
                return;
            }
            else
            {
                q.push(temp->right);
            }
        }
    }

    void inOrderTraversal()
    {
        inOrderTraversal(root);
    }

    void inOrderTraversal(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        inOrderTraversal(root->left);
        cout << root->data << "->";
        inOrderTraversal(root->right);
    }
};
int main()
{
    Binarytree tree;
    int size;
    cout << "How many nodes you wanna insert? : ";
    cin >> size;
    int val;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of node " << i + 1 << ": ";
        cin >> val;
        tree.insert(val);
    }

    tree.inOrderTraversal();

    return 0;
}