#include <bits/stdc++.h>
using namespace std;

class Compare
{
public:
    bool operator()(const pair<string, int> &a, const pair<string, int> &b)
    {
        if (a.first == b.first)
            return a.second > b.second;
        return a.first < b.first;
    }
};

int main()
{
    int N;
    cin >> N;

    vector<pair<string, int>> pairs;

    for (int i = 0; i < N; ++i)
    {
        string st;
        int num;
        cin >> st >> num;
        pairs.push_back({st, num});
    }

    sort(pairs.begin(), pairs.end(), Compare());

    for (const auto &p : pairs)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
