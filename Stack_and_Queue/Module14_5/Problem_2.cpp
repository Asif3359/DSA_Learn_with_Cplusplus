#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> myst1;
    stack<int> myst2;

    int N1;
    cin >> N1;
    for (int i = 0; i < N1; i++)
    {
        int val;
        cin >> val;
        myst1.push(val);
    }

    int N2;
    cin >> N2;
    for (int i = 0; i < N2; i++)
    {
        int val;
        cin >> val;
        myst2.push(val);
    }

    stack<int> tempst;

    while (!myst2.empty())
    {
        int top = myst2.top();
        myst2.pop();
        tempst.push(top);
    }

    if (myst1 == tempst)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    while (!tempst.empty())
    {
        int top = tempst.top();
        tempst.pop();
        myst2.push(top);
    }

    return 0;
}