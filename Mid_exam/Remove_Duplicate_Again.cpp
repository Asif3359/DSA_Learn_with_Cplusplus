#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<int> mylist;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }

        mylist.push_back(val);
    }
    mylist.sort();
    mylist. unique();
    for (auto it = mylist.begin(); it != mylist.end() ; it++)
    {
        cout << *it << " ";
    }
    

    return 0;
}