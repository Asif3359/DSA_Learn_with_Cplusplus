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

void removeDuplicates(Node *&head, Node *&taill)
{
    Node *currentNode = head;
    while (currentNode != NULL)
    {
        Node *current = currentNode;
        while (current->next != NULL)
        {
            if (current->next->Val == currentNode->Val)
            {
                Node *temp = current->next;
                current->next = current->next->next;
                if (current->next == NULL)
                {
                    taill = current;
                }
                delete temp;
            }
            else
            {
                current = current->next;
            }
        }
        currentNode = currentNode->next;
    }
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->Val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *taill = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        ListInsertTaill(head, taill, val);
    }
    removeDuplicates(head, taill);
    printList(head);
    return 0;
}