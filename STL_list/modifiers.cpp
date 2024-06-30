#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    list<int> myNewList;
    list<int> list1 = {100, 200, 300, 400};
    // myNewList = myList;
    myNewList.assign(myList.begin(), myList.end());

    myNewList.push_front(100);
    myNewList.push_back(200);
    myNewList.pop_back();
    myNewList.pop_front();

    myNewList.insert(next(myNewList.begin(), 2), list1.begin(), list1.end());
    myNewList.erase(next(myNewList.begin(), 2), next(myNewList.begin(), 5));

    replace(myNewList.begin(), myNewList.end(), 50, 500);
    // for (int val : myNewList)
    // {
    //     cout << val << " ";
    // }

    auto it = find(myNewList.begin(), myNewList.end(), 600);

    if (it == myNewList.end())
    {
        cout << "Not Found \n";
    }
    else
    {
        cout << "Found\n";
    }
    cout << endl;
    return 0;
}