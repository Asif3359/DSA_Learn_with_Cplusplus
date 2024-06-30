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

void reverseList(Node *&head, Node *curent)
{
    if (curent->next == NULL)
    {
        head = curent;
        return;
    }
    reverseList(head, curent->next);
    curent->next->next = curent;
    curent->next = NULL;
}
void reverseList2(Node *&head)
{
    Node *temp = NULL;
    Node *prev = NULL;
    Node *current = head;

    while (current != NULL) // 1     2     3    4
    {

        temp = current->next; // 2
        current->next = prev; // NULL
        prev = current;       // 1
        current = temp;       // 2
    }
    head = prev;
}

void printList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->Val << " ";
        temp = temp->next;
    }
    cout << endl;
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

        InsertList(head, tail, val);
    }
    // reverseList(head, head);
    reverseList2(head);
    printList(head);

    return 0;
}