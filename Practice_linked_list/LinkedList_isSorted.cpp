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
bool isSorted(Node *head)
{
    
    Node * temp = head ;
    Node * temp_1 = head->next;

    while (temp != NULL && temp_1 != NULL)
    {
        if(temp->Val > temp_1->Val)
        {
            return false;
        }
        temp = temp->next;
        temp_1 = temp_1->next;
    }

    return true;
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
    if(isSorted(head))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    

    return 0;
}