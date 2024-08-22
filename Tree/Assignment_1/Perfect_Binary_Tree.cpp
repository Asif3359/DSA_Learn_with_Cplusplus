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
int c = 0;
int maxHight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root)
    {
        c = c + 1;
    }
    int l = maxHight(root->left);
    int r = maxHight(root->right);

    return max(l, r) + 1;
}
int main()
{
    Node *root = input_tree();
    if(pow(2,maxHight(root))-1 == c)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    

    return 0;
}