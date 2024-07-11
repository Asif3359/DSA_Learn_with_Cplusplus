#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, q;
    cin >> s >> q;

    stack<int> mystack;
    queue<int> myqueue;

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