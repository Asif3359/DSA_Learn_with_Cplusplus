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
bool CheckDuplicateValue(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        Node *temp_1 = temp->next;
        while (temp_1 != NULL)
        {

            if (temp->Val == temp_1->Val)
            {
                return false;
            }
            temp_1 = temp_1->next;
        }
        temp = temp->next;
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
    if (CheckDuplicateValue(head))
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }

    return 0;
}