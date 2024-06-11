#include <bits/stdc++.h>

using namespace std;

int N ;
vector<int> V;

void useReplace(void)
{
    for (int i = 0; i < N; i++)
    {
        if(V[i]>0)
        {
            replace(V.begin(),V.end(),V[i],1);
        }
        else if (V[i]<0)
        {
            replace(V.begin(),V.end(),V[i],2);
        }
    }
}


void useMenual(void)
{
    for (int i = 0; i < N; i++)
    {
        if(V[i]>0)
        {
            V[i]=1;
        }
        else if (V[i]<0)
        {
            V[i]=2;
        }
    }
}

int main()
{
    cin>> N ;
    V.reserve(N);

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    // useReplace();

    useMenual();

    for (int i = 0; i < N; i++)
    {
        cout << V[i] << " ";
    }
    cout <<"\n";
    return 0;
}