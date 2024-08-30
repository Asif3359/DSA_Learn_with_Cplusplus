#include <bits/stdc++.h>
using namespace std;

class MinHeapCompare
{
public:
    bool operator()(const int &a, const int &b) const
    {
        return a > b;
    }
};

int main()
{
    int N;
    cin >> N;
    priority_queue<int, vector<int>, MinHeapCompare> minHeap;

    for (int i = 0; i < N; ++i)
    {
        int x;
        cin >> x;
        minHeap.push(x);
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; ++i)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            int x;
            cin >> x;
            minHeap.push(x);
            cout << minHeap.top() << endl;
        }
        else if (command == 1)
        {

            if (!minHeap.empty())
            {
                cout << minHeap.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            if (!minHeap.empty())
            {
                minHeap.pop();
                if (!minHeap.empty())
                {
                    cout << minHeap.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}
