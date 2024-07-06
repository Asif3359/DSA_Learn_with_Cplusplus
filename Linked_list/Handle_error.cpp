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

    system("clear");
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
        if (temp == NULL)
        {
            cout << "Invalid Index ";
            return;
        }
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

void DeleteFromPosition(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Position!";
            return;
        }
    }
    Node *extra = temp->next;
    if (temp->next == NULL)
    {
        cout << "Invalid Position!";
        return;
    }
    temp->next = temp->next->next;
    delete extra;
}

void DeleteHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "Head is Not found!";
        return;
    }
    Node *extra = head;
    head = head->next;
    delete extra;
}

int main()
{
    system("clear");
    Node *head = NULL;
    while (true)
    {
        cout << "\nOption 1 : Insert at Tail \n";     // D
        cout << "Option 2 : Print Linked List \n";    // D
        cout << "Option 3 : Insert at position \n";   // D
        cout << "Option 4 : Insert at Head \n";       // D
        cout << "Option 5 : Delete from position \n"; // D
        cout << "Option 6 : Delete Head \n";          // D
        cout << "Option X : Terminate \n";

        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter Element :";
            int val;
            cin >> val;
            insertAtTail(head, val);
            system("clear");
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
                system("clear");
            }
            else
            {
                insetAtPosition(head, pos, val);
                system("clear");
            }
        }
        else if (op == 4)
        {
            int val;
            cout << "Enter element :";
            cin >> val;
            insertAtHead(head, val);
            system("clear");
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter position :";
            cin >> pos;
            if (pos == 0)
            {
                DeleteHead(head);
                system("clear");
            }
            else
            {
                DeleteFromPosition(head, pos);
                system("clear");
            }
        }
        else if (op == 6)
        {
            DeleteHead(head);
            system("clear");
        }
        else
        {
            return 0;
        }
    }

    return 0;
}