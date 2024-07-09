#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int Val;
    Node *next;
    Node *prev;

    Node(int Val)
    {
        this->Val = Val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;

        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }
    int top()
    {
        return tail->Val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

bool isEqual(MyStack st1, MyStack st2)
{
    if (st1.size() != st2.size())
    {
        return false;
    }
    else
    {
        bool flag = true;
        MyStack sttemp1;
        MyStack sttemp2;

        while (!st1.empty() && !st2.empty())
        {
            int top1 = st1.top();
            st1.pop();
            sttemp1.push(top1);

            int top2 = st2.top();
            st2.pop();
            sttemp2.push(top2);

            if (top1 != top2)
            {
                flag = false;
            }
        }
        while (!sttemp1.empty() && !sttemp2.empty())
        {
            int top1 = sttemp1.top();
            sttemp1.pop();
            st1.push(top1);

            int top2 = sttemp2.top();
            sttemp2.pop();
            st2.push(top2);
        }

        return flag;
    }
}

int main()
{
    MyStack st1;
    MyStack st2;

    int N1;
    cin >> N1;

    for (int i = 0; i < N1; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    int N2;
    cin >> N2;

    for (int i = 0; i < N2; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    if (isEqual(st1, st2))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}