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
    cout << endl;
    cout << "Your List :";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->Val << " ,";
        temp = temp->next;
    }
    cout << endl;
}

void insetAtPosition(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "\nOption 1 : Insert at Tail \n";
        cout << "Option 2 : Print Linked List \n";
        cout << "Option 3 : Insert at position \n";
        cout << "Option 4 : Insert at Head \n";
        cout << "Option 5 : Terminate \n";

        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter Element :";
            int val;
            cin >> val;
            insertAtTail(head, val);
        }
        else if (op == 2)
        {
            PrintLinkedList(head);
        }
        else if (op == 3)
        {
            cout << "Enter Position :";
            int pos;
            cin >> pos;

            cout << "Enter Element :";
            int val;
            cin >> val;
            if (pos == 0)
            {
                // cout << "you can't Insert at Head\n";
                insertAtHead(head, val);
            }
            else
            {
                insetAtPosition(head, pos, val);
            }
        }
        else if (op == 4)
        {
            int val;
            cout << "Enter element :";
            cin >> val;
            insertAtHead(head, val);
        }
        else
        {
            return 0;
        }
    }

    return 0;
}