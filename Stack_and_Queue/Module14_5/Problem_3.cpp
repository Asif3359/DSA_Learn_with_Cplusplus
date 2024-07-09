#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> myst1;
    stack<int> tempStack;

    int N1;
    cin >> N1;
    for (int i = 0; i < N1; i++)
    {
        int val;
        cin >> val;
        myst1.push(val);
    }

    while (!myst1.empty())
    {
        tempStack.push(myst1.top());
        myst1.pop();
    }

    while (!tempStack.empty())
    {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    return 0;
}
