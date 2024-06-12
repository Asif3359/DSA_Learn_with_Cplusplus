#include <bits/stdc++.h>

using namespace std;

void BinarySearch(int arr[], int key, int N)
{
    int left = 0;
    int right = N - 1;
    bool found = false;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            cout << "YES\n";
            return ;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (!found)
    {
        cout << "No\n" << endl;
    }
}

int main()
{
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int key;
        cin >> key;
        BinarySearch(arr, key, N);
    }

    return 0;
}