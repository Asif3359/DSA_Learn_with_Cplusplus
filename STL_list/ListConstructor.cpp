#include <bits/stdc++.h>

using namespace std;

int main()
{
    // list <int> MyList;
    // cout << Mylist.front() << " ";

    list<int> Mylist(10, 5);
    list<int> List2 = {1, 2, 3, 4, 5};
    int a[5] = {10, 20, 30, 40, 50};
    vector<int> V = {100, 200, 300, 400};
    list<int> compyList1(List2);
    list<int> compyList2(a, a + 5);
    list<int> copyList3(V.begin(), V.end());

    // for (auto it = compyList1.begin(); it != compyList1.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    for (int val : List2)
    {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}