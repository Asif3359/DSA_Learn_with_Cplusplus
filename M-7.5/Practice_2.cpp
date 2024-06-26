#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int Val;
    Node *next;

    Node(int Val)
    {
        this->Val = Val;
        this->next = NULL;
    }
};

void InsertList(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void ListPrintReverse(Node *N)
{
    if (N == NULL)
    {
        return;
    }

    ListPrintReverse(N->next);
    cout << N->Val << " ";
}

int main()
{

    Node *head = NULL;
    Node *tail = head;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        InsertList(head, tail, val);
    }

    ListPrintReverse(head);
    cout << endl;

    return 0;
}