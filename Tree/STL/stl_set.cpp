#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    if (st.count(7))
    {
        cout << st.count(7) << "\n";
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    cout << endl;
    return 0;
}