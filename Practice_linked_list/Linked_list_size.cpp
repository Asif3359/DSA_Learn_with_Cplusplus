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
    int size = 0 ;
    Node * temp = head ;

    while (temp != NULL)
    {
        temp = temp->next;
        size++;
    }
    return size;
}
int main()
{
    Node *head = NULL;
    int size;
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
    cout << linkedListSize(head) << endl; 

    return 0;
}