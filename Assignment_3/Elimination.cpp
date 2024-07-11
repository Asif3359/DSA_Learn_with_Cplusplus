#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string str;
        cin >> str;

        stack<char> myStack;

        for (char s : str)
        {
            if (!myStack.empty() && myStack.top() == '0' && s == '1')
            {
                myStack.pop();
            }
            else
            {
                myStack.push(s);
            }
        }

        if (myStack.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
