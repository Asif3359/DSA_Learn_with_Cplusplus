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

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void PrintLinkedList(Node *head)
{

    cout << "\nYour List :";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->Val << " ,";
        temp = temp->next;
    }
}

int main()
{
    int val;
    Node *head = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insertAtTail(head, val);
    }
    PrintLinkedList(head);
    cout << endl;

    return 0;
}