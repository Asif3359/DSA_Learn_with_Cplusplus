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

int ListMaxValue(Node *head)
{
    int max = INT_MIN;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->Val > max)
        {
            max = temp->Val;
        }

        temp = temp->next;
    }
    return max;
}
int ListMinValue(Node *head)
{
    int min = INT_MAX;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->Val < min)
        {
            min = temp->Val;
        }

        temp = temp->next;
    }
    return min;
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

    int result = ListMaxValue(head) - ListMinValue(head);

    cout << result << endl;

    return 0;
}