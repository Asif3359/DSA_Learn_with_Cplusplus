#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> arr(N);

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        bool isSorted = true ;

        for (int i = 0; i < N-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                isSorted = false ;
            }
        }
        if(isSorted)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }

    return 0;
}