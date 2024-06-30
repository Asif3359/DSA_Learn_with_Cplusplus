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
    newNode->prev = tail;
    newNode->next = tail->next;
    tail->next = newNode;
    tail = newNode;
}
void PrintDublyList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->Val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void DeletePosition(Node *&head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *extra = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete extra;
}
void DeleteHead(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "List is empty\n";
        return;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        delete head;
        return;
    }

    Node *extra = head;
    head = head->next;
    head->prev = NULL;

    delete extra;
}
void DeleteTaill(Node *&tail)
{
    if (tail == NULL)
    {
        cout << "List is empty\n";
        return;
    }

    Node *extra = tail;
    tail = tail->prev;
    tail->next = NULL;

    delete extra;
}
void PrintDublyListReverse(Node *tail)
{
    Node *temp = tail;
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
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);

    // head->next = a;
    // a->prev = head;
    // a->next = b;
    // b->prev = a;
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
    int pos;

    cin >> pos;

    if (pos == 0)
    {
        DeleteHead(head, tail);
    }
    else if (pos == ListSize(head) - 1)
    {
        DeleteTaill(tail);
    }
    else if (pos >= ListSize(head) || pos < 0)
    {
        cout << "Invalid pos\n";
    }
    else
    {
        DeletePosition(head, pos);
    }

    PrintDublyListReverse(tail);
    PrintDublyList(head);

    return 0;
}