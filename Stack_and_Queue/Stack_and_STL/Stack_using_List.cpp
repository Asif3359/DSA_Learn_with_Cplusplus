#include <bits/stdc++.h>

using namespace std;

class MyStack
{
public:
    list<int> L;

    void push(int val)
    {
        L.push_back(val);
    }
    void pop()
    {
        L.pop_back();
    }
    int top()
    {
        return L.back();
    }
    int size()
    {
        return L.size();
    }
    bool empty()
    {
        if (L.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    MyStack st;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}