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

void isPresent(Node *head, int val)
{
    int count = 0;
    Node *tmp = head;
    bool isExist = false ;

    while (tmp != NULL)
    {
        
        if (tmp->Val == val)
        {
            isExist = true;
            break;
        }
        tmp = tmp->next;  
        count ++;
    }
    if (isExist)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }
        

}

int main()
{
    Node *head = NULL;
    Node *taill = head;

    int T;
    cin >> T;
    while (T--)
    {
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
        int X;
        cin >> X;

        isPresent(head, X);
        head = NULL;
        taill = NULL;
    }

    return 0;
}