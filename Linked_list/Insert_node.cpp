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
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->Val << " ,";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    cout << "Option 1 : Insert at Tail \n";
    int op;
    cin >> op;
    if (op == 1)
    {
        cout << "Enter Element Amount :";
        int T;
        cin >> T;
        cout << "Enter Element :";
        while (T--)
        {
            int val;
            cin >> val;
            insertAtTail(head, val);
        }
        PrintLinkedList(head);
    }

    return 0;
}