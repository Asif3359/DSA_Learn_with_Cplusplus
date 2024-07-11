#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Q;
    cin >> Q;

    queue<string> myQueue;

    while (Q--)
    {
        int val;
        cin >> val;

        if (val == 0)
        {
            string name;
            cin >> name;
            myQueue.push(name);
        }
        else if (val == 1)
        {
            if (!myQueue.empty())
            {
                cout << myQueue.front() << "\n";
                myQueue.pop();
            }
            else
            {
                cout << "Invalid\n";
                continue;
            }
        }
    }

    return 0;
}
