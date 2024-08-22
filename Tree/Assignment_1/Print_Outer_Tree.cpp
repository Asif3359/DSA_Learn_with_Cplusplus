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
void collectLeft(Node *root, vector<int> &leftBoundary)
{
    while (root)
    {
        leftBoundary.push_back(root->Val);
        if (root->left)
        {
            root = root->left;
        }

        else if (root->right)
        {
            root = root->right;
        }
        else
        {
            break;
        }
    }
}

void collectRight(Node *root, vector<int> &rightBoundary)
{
    while (root)
    {
        rightBoundary.push_back(root->Val);
        if (root->right)
        {
            root = root->right;
        }
        else if (root->left)
        {
            root = root->left;
        }
        else
        {
            break;
        }
    }
}

void printOuterSequence(Node *root)
{
    if (!root)
        return;

    vector<int> leftBoundary, rightBoundary;
    collectLeft(root->left, leftBoundary);
    collectRight(root->right, rightBoundary);

    reverse(leftBoundary.begin(), leftBoundary.end());
    for (int val1 : leftBoundary)
    {
        cout << val1 << " ";
    }

    cout << root->Val << " ";

    for (int val2 : rightBoundary)
    {
        cout << val2 << " ";
    }

    cout << endl;
}

int main()
{
    Node *root = input_tree();
    printOuterSequence(root);
    return 0;
}
