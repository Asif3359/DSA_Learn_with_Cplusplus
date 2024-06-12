#include <bits/stdc++.h>

using namespace std;

int  main()
{
    long long  N , Q ;
    cin >> N >> Q;
    long long  a[N];
     for (long long  i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    long long  px[N];
    px[0]= a[0];
    for (long long  i = 1; i < N; i++)
    {
        px[i]=a[i]+px[i-1];
    }

     while (Q--)
     {
        long long  L ,R ;
        cin >> L >> R ;
        long long res ;
        L--;
        R--;

        if(L==0)
        {
            res = px[R];
        }
        else
        {
            res = (px[R]- px[L-1]);
        }
        
        cout << res <<"\n";
     }
     
    return 0;
}