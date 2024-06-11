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
    int count = 0 ;

    for (int i = 0; i < N; i++)
    {
        vector<int> :: iterator it;

        it = find(V.begin(),V.end(),V[i]+1);

        if(it == V.end())
        {
            count = count ;
        }
        else
        {
            count++;
        }
    }

    cout << count << "\n";
    
    return 0;
}