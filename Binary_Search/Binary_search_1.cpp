#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,Q ;
    cin >> N >> Q ;

    int a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    while (Q--)
    {
        int x ;
        cin >> x ;
        bool flag = false ;
        for (int i = 0; i < N; i++)
        {
           if(x==a[i])
           {
            flag = true;
           }
        }

        if (flag)
        {
            cout << "found\n";
        }
        else
        {
            cout << "not found\n";
        }
        
    }
    
    return 0;
}