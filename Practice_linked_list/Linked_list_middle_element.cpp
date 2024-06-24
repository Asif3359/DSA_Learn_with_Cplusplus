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

int linkedListSize(Node *head)
{
    int size = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        size++;
    }
    return size;
}

void findMiddleElement(Node *head, int pos, int listSize)
{
    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (listSize % 2 == 0)
    {
        cout << temp->Val << "\n";
    }
    else
    {
        cout << temp->Val << " " << temp->next->Val << "\n";
    }
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        InsertAtTail(head, val);
    }

    int size = linkedListSize(head);
    int listSize = size ;
    if (size % 2 != 0)
    {
        size = (size / 2) + 1;
    }
    else
    {
        size = (size / 2);
    }

    findMiddleElement(head, size, listSize+1);

    return 0;
}