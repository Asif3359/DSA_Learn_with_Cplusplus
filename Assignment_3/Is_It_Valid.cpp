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

        stack<char> myStack1;
        stack<char> myStack2;

        for (char s : str)
        {
            if (s == '0')
            {
                myStack1.push(s);
            }
        }
        for (char s : str)
        {
            if (s == '1')
            {
                if (!myStack1.empty())
                {
                    myStack1.pop();
                }
            }
        }

        for (char s : str)
        {
            if (s == '1')
            {
                myStack2.push(s);
            }
        }
        for (char s : str)
        {
            if (s == '0')
            {
                if (!myStack2.empty())
                {
                    myStack2.pop();
                }
            }
        }

        if (myStack1.empty() && myStack2.empty())
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
