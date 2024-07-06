// problem 1 

#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int Val;
    Node *next;
    Node *prev;
    int size;

    Node(int Val)
    {
        this->Val = Val;
        this->next = NULL;
        this->prev = NULL;
        size++;
    }
};
class DublyLinkedList
{
public:
    Node *head;
    Node *tail;
    int size;

    DublyLinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void listInsert(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        size++;
    }
    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->Val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool isEqual(DublyLinkedList &list)
    {
        if (size != list.size)
        {
            return false;
        }
        Node *temp1 = head;
        Node *temp2 = list.head;

        while (temp1 != NULL && temp2)
        {
            if (temp1->Val != temp2->Val)
            {
                return false;
            }

            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
};

int main()
{
    DublyLinkedList list1;
    DublyLinkedList list2;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        list1.listInsert(val);
    }
    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }
        list2.listInsert(val);
    }

    if (list1.isEqual(list2))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
