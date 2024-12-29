#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
}; 


void InOrder(struct Node *root)
{
    if (root == nullptr)
        return;
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

void PostOrder(struct Node *root)
{
    if (root == nullptr)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

void PreOrder(struct Node *root)
{
    if (root == nullptr)
        return;
     cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}


int main()
{
    Node * root = new Node(1);
    Node * two = new Node(2);
    Node * five = new Node(5);
    Node * six = new Node(6);
    Node * seven = new Node(7);
    Node * eight = new Node(8);
    Node * nine = new Node(9);
    Node * ten = new Node(10);

    root -> left = two;
    root -> right = five;
    two -> left = six;
    two -> right = seven;
    six -> left = eight;
    five -> left = ten;
    five -> right = nine;

    cout << "\nPreorder traversal = ";
    PreOrder(root) ;

    cout << "\nInorder traversal = ";
    InOrder(root);
    

    cout << "\nPostorder traversal = ";
    PostOrder(root);
    

    return 0;
}