#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N ;
    cin >> N ;

    vector<int> arr(N);


    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int N1 ;
    cin >> N1;
    vector<int> arr1(N1);

    for (int i = 0; i < N1; i++)
    {
        cin >> arr1[i];
    }

    int pos ;
    cin >> pos ;

    arr.insert(arr.begin()+pos , arr1.begin(),arr1.end());

    for (int i = 0; i < N+N1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
        
    return 0;
}