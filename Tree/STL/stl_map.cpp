#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["asif ahammed"] = 359;
    mp["raju bepary"] = 384;
    mp["wasiure"] = 311;

    mp.insert({"atik", 99});

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " ";
        cout << it->second << " \n";
    }
    if (mp.count("atik"))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}