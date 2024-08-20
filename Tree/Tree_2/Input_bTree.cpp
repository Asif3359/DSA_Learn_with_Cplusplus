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

Node *input_tree()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;

    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        // 1
        Node *p = q.front();
        q.pop();

        // 2
        int l, r;
        cin >> l >> r;

        Node *left, *right;

        if (l == -1)
        {
            left = NULL;
        }
        else
        {
            left = new Node(l);
        }
        if (r == -1)
        {
            right = NULL;
        }
        else
        {
            right = new Node(r);
        }

        p->left = left;
        p->right = right;

        // 3
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

void printLevelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1
        Node *f = q.front();
        q.pop();

        // 2
        cout << f->Val << " ";

        // 3
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = input_tree();
    cout << "Level order traversal:" << endl;
    printLevelOrder(root);
    cout << endl;

    return 0;
}