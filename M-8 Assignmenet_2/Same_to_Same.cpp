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

void ListInsert(Node *&head, Node *&taill, int val)
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

int ListSize(Node *head)
{
    int count = 0 ;
    Node *temp = head;

    while (temp != NULL)
    {
        count ++ ;
        temp = temp->next;
    }
    
    return count;
}

bool ListCompare(Node * head , Node * head_1)
{
    Node * temp = head;
    Node * temp_1 = head_1;

    while (temp != NULL && temp_1 != NULL)
    {
        if(temp->Val != temp_1->Val)
        {
            return false ;
        }
        temp = temp->next;
        temp_1 = temp_1->next;
    }
    
    return true ;

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
        ListInsert(head, taill, val);
    }

    Node *head_1 = NULL;
    Node *taill_1 = head_1;
    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        ListInsert(head_1, taill_1, val);
    }

    if(ListSize(head) == ListSize(head_1))
    {
        if (ListCompare(head, head_1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    else
    {
        cout << "NO\n";
        return 0;
    }
 
    

    return 0;
}