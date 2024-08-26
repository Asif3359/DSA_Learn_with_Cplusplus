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
vector<int> V;
int findLevel(Node *root, int l)
{
    if (root == NULL)
        return -1;

    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        Node *current = q.front().first;
        int level = q.front().second;
        q.pop();

        if (level == l)
        {
            // cout << current->Val << " ";
            V.push_back(current->Val);
        }

        if (current->left)
            q.push({current->left, level + 1});
        if (current->right)
            q.push({current->right, level + 1});
    }

    return -1;
}

int main()
{
    Node *root = input_tree();
    int level;
    cin >> level;

    findLevel(root, level);
    if (V.empty())
    {
        cout << "Invalid\n";
    }
    else
    {
        for (int val : V)
        {
            cout << val << " ";
        }
    }

    cout << endl;

    return 0;
}