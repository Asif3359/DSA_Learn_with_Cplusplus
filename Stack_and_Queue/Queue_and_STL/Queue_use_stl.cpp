#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> qu;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        qu.push(val);
    }

    for (int i = 0; i < n; i++)
    {
        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl;

   return 0;

}