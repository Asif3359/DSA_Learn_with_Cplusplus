#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;

    while (true)
    {
        int c;
        cin >> c;

        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(log n)
        }
        else if (c == 1)
        {
            pq.pop(); // O (log n)
        }
        else if (c == 2)
        {
            cout << pq.top() << " \n"; // O(1)
        }
        else
        {
            break;
        }
    }

    return 0;
}