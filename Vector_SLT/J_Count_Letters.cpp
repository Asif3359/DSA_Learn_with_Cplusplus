#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str ;
    cin >> str ;

    vector<int> V(26,0);

    for (char ch : str)
    {
        V[ch-'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (V[i] > 0)
        {
            cout << char('a' + i) << " : " << V[i] << endl;
        }
    }
      
    return 0;
}