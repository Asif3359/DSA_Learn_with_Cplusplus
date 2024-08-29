#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int T;
    cin >> T;

    while (T--)
    {
        set<int> st;
        int N;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        for (int x : st)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}