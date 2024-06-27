#include <iostream>
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

void ListInsertTaill(Node *&head, Node *&taill, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        taill = newNode;
    }
    else
    {
        taill->next = newNode;
        taill = newNode;
    }
}

void ListInsertHead(Node *&head, Node *&taill, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        taill = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void ListPrint(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->Val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void DeleteHead(Node *&head, Node *&taill)
{
    if (head == NULL)
    {
         taill = NULL;
        return;
    }
    Node *extra = head;
    head = head->next;
    delete extra;
}

void DeleteFromPosition(Node *&head, Node *&taill, int pos)
{
    if (head == NULL)
    {
        return;
    }

    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            return;
        }
    }
    
    Node *extra = temp->next;
    if (temp->next == NULL)
    {
        taill = temp; 
    }
    else
    {
        temp->next = temp->next->next;
        if (temp->next == NULL)
        {
            taill = temp; 
        }
    }
    delete extra;
}

int main()
{
    Node *head = NULL;
    Node *taill = NULL;

    int T;
    cin >> T;

    while (T--)
    {
        int Q, val;
        cin >> Q >> val;

        if (Q == 0)
        {
            ListInsertHead(head, taill, val);
        }
        else if (Q == 1)
        {
            ListInsertTaill(head, taill, val);
        }
        else if (Q == 2)
        {
            if (val == 0)
            {
                DeleteHead(head, taill);
            }
            else
            {
                DeleteFromPosition(head, taill, val);
            }
        }
        ListPrint(head);
    }

    return 0;
}