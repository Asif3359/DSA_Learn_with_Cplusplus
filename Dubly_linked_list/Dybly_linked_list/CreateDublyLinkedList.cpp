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

void InsertAtPosition(Node *head, int pos, int val)
{
    // 10 20 30 40
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;    // 100->30
    temp->next = newNode;          // 20->100
    newNode->next->prev = newNode; // 100<-30
    newNode->prev = temp;          // 20<-100
}
void InsertHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void InsertTaill(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
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
    int val;

    cin >> pos >> val;
    if (pos == 0)
    {
        InsertHead(head, tail, val);
    }

    else if (pos == ListSize(head))
    {
        InsertTaill(head, tail, val);
    }
    else if (pos > ListSize(head) || pos < 0)
    {
        cout << "Invalid pos\n";
    }
    else
    {
        InsertAtPosition(head, pos, val);
    }

    PrintDublyListReverse(tail);
    PrintDublyList(head);

    return 0;
}