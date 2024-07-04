#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string Val)
    {
        this->val = Val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void InsertDublyList(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void PrintList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

void visitList(Node *&current, Node *head, string address)
{
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->val == address)
        {
            current = temp;
            cout << current->val << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Not Available\n";
}
void nextList(Node *&current)
{
    if (current->next != NULL)
    {
        current = current->next;
        cout << current->val << endl;
    }
    else
    {
        cout << "Not Available\n";
    }
}

void prevList(Node *&current)
{
    if (current->prev != NULL)
    {
        current = current->prev;
        cout << current->val << endl;
    }
    else
    {
        cout << "Not Available\n";
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string browser;
    while (cin >> browser)
    {
        if (browser == "end" || browser == "END")
        {
            break;
        }
        InsertDublyList(head, tail, browser);
    }

    int Q;
    cin >> Q;
    Node *current = head;

    while (Q--)
    {
        string comand, address;

        cin >> comand;

        if (comand == "visit")
        {
            cin >> address;
            visitList(current, head, address);
        }
        else if (comand == "next")
        {
            nextList(current);
        }
        else if (comand == "prev")
        {
            prevList(current);
        }
    }

    return 0;
}
