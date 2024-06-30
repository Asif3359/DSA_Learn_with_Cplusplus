#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    cout << myList.max_size() << "\n";
    // cout << myList.size() << "\n";
    // myList.clear();
    myList.resize(2);
    // myList.resize(4);
    myList.resize(4, 100);

    cout << myList.size() << "\n";

    for (int val : myList)
    {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}