#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore(); 

    while (T--)
    {
        string san;
        getline(cin, san);
        string word;
        stringstream ss(san);
        map<string, int> mp;

        string mostFrequentWord;
        int maxCount = 0;
        int firstMaxOccurrence = INT_MAX;

        int wordPosition = 0;
        while (ss >> word)
        {
            mp[word]++;
            wordPosition++;

            if (mp[word] > maxCount || (mp[word] == maxCount && wordPosition < firstMaxOccurrence))
            {
                maxCount = mp[word];
                mostFrequentWord = word;
                firstMaxOccurrence = wordPosition;
            }
        }
        cout << mostFrequentWord << " " << maxCount << endl;
    }

    return 0;
}
