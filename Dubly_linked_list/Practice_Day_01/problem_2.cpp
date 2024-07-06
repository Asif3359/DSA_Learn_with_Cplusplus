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
    void listReverse()
    {
        if (head == NULL)
        {
            return;
        }
        Node *temp1 = head;
        Node *temp2 = tail;
        while (temp1->next != temp2 && temp1 != temp2)
        {
            swap(temp1->Val, temp2->Val);
            temp1 = temp1->next;
            temp2 = temp2->prev;
        }
        swap(temp1->Val, temp2->Val);
    }
    bool isPalindrom()
    {
        if (head == NULL)
        {
            return false;
        }
        Node *temp1 = head;
        Node *temp2 = tail;
        while (temp1->next != temp2 && temp1 != temp2)
        {
            if (temp1->Val != temp2->Val)
            {
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->prev;
        }
        if (temp1->Val != temp2->Val)
        {
            return false;
        }

        return true;
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
};

int main()
{
    DublyLinkedList list1;

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
    list1.listReverse();
    list1.printList();

    return 0;
}