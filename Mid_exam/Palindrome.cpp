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

void InsertDublyList(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        newNode->prev = tail;
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}

bool isPalindrom(Node *head, Node *tail)
{
    if (head == NULL)
    {
        return false;
    }
    Node *temp1 = head;
    Node *temp2 = tail;
    while (temp1->next != temp2 && temp1 != temp2)
    {
        if (temp1->Val != temp2->Val)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }
    if (temp1->Val != temp2->Val)
    {
        return false;
    }

    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
            break;

        InsertDublyList(head, tail, val);
    }

    if (isPalindrom(head, tail))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}