#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N ;
    cin >> N ;

    vector<int> V(N);

    for (int i = 0; i < N; i++)
    {
       cin >> V[i];
    }
    int sum = V[0];
    for (int i = 1; i < N+1; i++)
    {
        cout << sum << " ";
        sum = sum + V[i];
    }
    cout << endl;

         
    return 0;
}