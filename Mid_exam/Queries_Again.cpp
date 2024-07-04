#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int Val;
    Node *next;
    Node *prev;

    Node(int Val)
    {
        this->Val = Val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void InsertHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void InsertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void InsertAtPosition(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < pos - 1; ++i)
    {
        if (temp == NULL)
        {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        InsertTail(head, tail, val);
    }
    else
    {
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}

void PrintDublyList(Node *head)
{
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->Val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void PrintDublyListReverse(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->Val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int ListSize(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int pos;
        int val;

        cin >> pos >> val;

        if (pos < 0 || pos > ListSize(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (pos == 0)
            {
                InsertHead(head, tail, val);
            }
            else if (pos == ListSize(head))
            {
                InsertTail(head, tail, val);
            }
            else
            {
                InsertAtPosition(head, tail, pos, val);
            }

            PrintDublyList(head);
            PrintDublyListReverse(tail);
        }
    }

    return 0;
}
