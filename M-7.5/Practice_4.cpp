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

void LustMaxElement(Node *head)
{
    Node *temp = head;

    int Max = INT_MIN;

    while (temp != NULL)
    {
        if (temp->Val > Max)
        {
            Max = temp->Val;
        }

        temp = temp->next;
    }
    cout << Max << endl;
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
    LustMaxElement(head);

    return 0;
}