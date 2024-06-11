#include <bits/stdc++.h>

using namespace std;

//  initialization  vector
void initialization (void)
{
    // vector<int> V ;
    // vector<int> V (5) // All element is 0 
    // vector<int> V (5,10); // all element is 10

    int a[6]={1,2,3,4,5,6};
    vector<int> V1(a,a+6);

    for (int i = 0; i < V1.size(); i++)
    {
        cout << V1[i] << " ";
    }
    cout<<endl;

    cout << V1.size() << endl;
}

// vector capacity 
void capacity(void)
{
    vector <int> v ;
    // cout<< v.max_size()<< endl;
    // cout << v.capacity() << endl; // capacity incress by n^2 or (multiply by 2) ;

    v.push_back(10);
    // cout << v.capacity() << endl;
    v.push_back(13);
    // cout << v.capacity() << endl;
    v.push_back(15);
    // cout << v.capacity() << endl;
    v.push_back(20);
    // cout << v.capacity() << endl;
    // v.clear();
    v.resize(2);
    v.resize(7);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl ;

}


int main()
{
    
    // initialization();
    capacity();

    return 0;
}