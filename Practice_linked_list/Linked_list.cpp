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

void InsertAnyPosition(Node *&head, int val, int pos)
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

void InsertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void DeleteAtPosition(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *extra = temp->next;
    temp->next = temp->next->next;
    delete extra;
}

void DeleteAtHEad (Node * &head)
{
    Node * extra = head ;
    head = head->next;
    delete extra;
}

void PrintLinkedLIst(Node *head)
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
    while (true)
    {
        int op;
        cout << "Option 1 Insert At Tail:\n";
        cout << "Option 2 Print Linked List:\n";
        cout << "Option 3 Insert at any Position:\n";
        cout << "Option 4 Insert at Head:\n";
        cout << "Option 5 Delete at Position:\n";
        cout << "Option 6 Delete at Head:\n";

        cout << "Option 7 Exit:\n";

        cin >> op;

        if (op == 1)
        {
            cout << "Enter Element :";
            int val;
            cin >> val;

            InsertAtTail(head, val);
        }
        else if (op == 2)
        {
            PrintLinkedLIst(head);
        }
        else if (op == 3)
        {
            cout << "Enter Position :";
            int pos;
            cin >> pos;
            cout << "Enter value :";
            int val;
            cin >> val;
            if (pos == 0)
            {
                InsertAtHead(head, val);
            }
            else
            {
                InsertAnyPosition(head, val, pos);
            }
        }
        else if (op == 4)
        {
            int val;
            cout << "Enter element :";
            cin >> val;
            InsertAtHead(head, val);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter Position :";
            cin >> pos;
            DeleteAtPosition(head, pos);
        }
        else if (op == 6)
        {
            DeleteAtHEad(head);
        }
        
        else
        {
            return 0;
        }
    }

    return 0;
}