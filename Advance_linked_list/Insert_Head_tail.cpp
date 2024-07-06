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

void insert(Node *&head, Node *&taill, int val)
{
    Node *newNode = new Node(val);


    if (head == NULL)
    {
        head = newNode;
        taill = newNode;
        return;
    }
    taill->next = newNode;
    taill = newNode;
}

void printLinkedList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->Val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printLinkedList_recursive(Node *N)
{
    Node *temp = N;

    if (N == NULL)
    {
        return;
    }
    printLinkedList_recursive(temp->next);
    cout << N->Val << " ";
}

void sortLinkedList(Node *head)
{

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next;  j!= NULL; j = j->next)
        {
            if (i->Val > j->Val)
            {
                swap(i->Val , j->Val);
            }
            
        }
        
    }
}

int main()
{

    Node *head = NULL;
    Node *taill = head;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }

        insert(head, taill, val);
    }
    sortLinkedList(head);
    printLinkedList(head);
    cout << endl;

    return 0;
}
