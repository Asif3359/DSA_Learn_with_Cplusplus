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

void PrintLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->Val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void InsertAtPosition(Node *&head, int val, int pos)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        PrintLinkedList(head);
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        if (temp == NULL)
        {
            cout << "Invalid\n";
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Invalid\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    PrintLinkedList(head);
}

int main()
{
    Node *head = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        InsertAtTail(head, val);
    }
    cout << endl;
    int Q;
    cin >> Q;

    while (Q--)
    {
        int pos, val;
        cin >> pos >> val;
        InsertAtPosition(head, val, pos);
    }

    return 0;
}