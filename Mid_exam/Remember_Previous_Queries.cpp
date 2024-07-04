#include <iostream>
#include <list>

using namespace std;

int main()
{
    int Q;
    cin >> Q;

    list<int> list1;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            list1.push_front(V);
        }
        else if (X == 1)
        {
            list1.push_back(V);
        }
        else if (X == 2)
        {
            int idx = 0;
            for (auto it = list1.begin(); it != list1.end(); ++it)
            {
                if (idx == V)
                {
                    list1.erase(it);
                    break;
                }
                idx++;
            }
        }

        cout << "L -> ";
        for (auto it = list1.begin(); it != list1.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;

        list<int> temp = list1;
        temp.reverse();
        cout << "R -> ";
        for (auto it = temp.begin(); it != temp.end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}