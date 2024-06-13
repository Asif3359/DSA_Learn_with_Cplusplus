#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N ;
    cin >> N ;
    vector<long long> arr(N);

    for (long long i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    vector<long long> resArray ;
    resArray.push_back(arr[0]);

    long long sum = arr[0];

    for (long long i = 1; i < N; i++)
    {
        sum = sum + arr[i];
        resArray.push_back(sum);
    }

    for (long long i = N-1; i >=0; i--)
    {
        cout << resArray[i] << " ";
    }
    cout << endl;

        
    return 0;
}