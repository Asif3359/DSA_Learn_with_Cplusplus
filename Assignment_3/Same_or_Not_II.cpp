#include <bits/stdc++.h>

using namespace std;

class MyStack
{
public:
    list<int> myList;
    int sz = 0;

    void push(int val)
    {
        sz++;
        myList.push_back(val);
    }
    void pop()
    {
        if (!empty())
        {
            sz--;
            myList.pop_back();
        }
    }
    int top()
    {
        if (!empty())
        {
            return myList.back();
        }
        return -1;
    }
    bool empty()
    {
        return myList.empty();
    }
    int size()
    {
        return sz;
    }
};

class MyQueue
{
public:
    list<int> myQueue;
    int sz = 0;

    void push(int val)
    {
        sz++;
        myQueue.push_back(val);
    }
    void pop()
    {
        if (!empty())
        {
            sz--;
            myQueue.pop_front();
        }
    }
    int front()
    {
        if (!empty())
        {
            return myQueue.front();
        }
        return -1; 
    }
    bool empty()
    {
        return myQueue.empty();
    }
    int size()
    {
        return sz;
    }
};

int main()
{
    int s, q;
    cin >> s >> q;

    MyStack mystack;
    MyQueue myqueue;

    for (int i = 0; i < s; i++)
    {
        int val;
        cin >> val;
        mystack.push(val);
    }

    for (int i = 0; i < q; i++)
    {
        int val;
        cin >> val;
        myqueue.push(val);
    }

    if (myqueue.size() != mystack.size())
    {
        cout << "NO\n";
        return 0;
    }

    bool isEqual = true;

    while (!myqueue.empty() && !mystack.empty())
    {
        if (myqueue.front() != mystack.top())
        {
            isEqual = false;
            break;
        }

        myqueue.pop();
        mystack.pop();
    }

    if (isEqual)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
