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

void PrintList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->Val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int ListSize(Node *head)
{
    int size = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
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

    Node *head_1 = NULL;
    Node *tail_1 = head_1;
    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        InsertList(head_1, tail_1, val);
    }

    if(ListSize(head) == ListSize(head_1))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    

    return 0;
}