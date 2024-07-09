#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> myst;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        myst.push(val);
    }

    stack<int> temp;
    temp = myst;

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    return 0;
}