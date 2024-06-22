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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->Val << endl;
        temp = temp->next;
    }
    
    return 0;
}