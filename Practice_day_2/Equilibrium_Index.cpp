#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N ;
    cin >> N ;
    vector<int> V(N);
    vector<int> V1(N);
    vector<int> V2(N);


    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    int sum = V[0];
    V1[0] = sum ;
    for (int i = 1; i < N; i++)
    {
        sum = sum + V[i];
        V1[i]= sum;
    }

    int sum2 = V[N-1];
    V2[N-1] = sum2 ;

    for (int i = N-2; i >= 0; i--)
    {
        sum2 = sum2 + V[i];
        V2[i]= sum2;
    }

    // for (int i = 0; i < N; i++)
    // {
    //     cout << V1[i] << " ";
    // }
    // cout << endl;
    //     for (int i = 0; i < N; i++)
    // {
    //     cout << V2[i] << " ";
    // }
    // cout << endl;

    for (int i = 1; i < N-1; i++)
    {
        if (V1[i-1]==V2[i+1])
        {
            cout << i << endl;
        }
    }

    return 0;
}