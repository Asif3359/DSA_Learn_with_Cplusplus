#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int Val;
    Node *left;
    Node *right;

    Node(int Val)
    {
        this->Val = Val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->Val << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->Val << " ";
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->Val << " ";
    inOrder(root->right);
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    d->left = f;
    d->right = g;
    h->right = i;

    preorder(root);
    cout << endl;

    postorder(root);
    cout << endl;

    inOrder(root);
    cout << endl;
    return 0;
}