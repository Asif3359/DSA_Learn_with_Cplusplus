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

// vector modifiers 
void modifiers(void)
{
    vector<int> x = {10,20,30};
    vector<int> v = {1,2,3};

    v=x ; // O(N)
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    

}

//VectorInsert
void VectorInsert(void)
{
    vector <int> V = {1,2,3,4,5};
    vector <int> V2 = {10,20,30};
    V.insert(V.begin()+V.size(),V2.begin(),V2.end());

    for ( int x : V)
    {
        cout <<x<< " ";
    }
    cout<< endl;
    
}

//VectorErese
void VectorErese(void)
{
    vector <int> V = {1,2,3,4,5};
    vector <int> V2 = {10,20,30};
    V.insert(V.begin()+V.size(),V2.begin(),V2.end());

    V.erase(V.begin()+2, V.begin()+4); // erese 1+2=3 index;

    for ( int x : V)
    {
        cout <<x<< " ";
    }
    cout<< endl;
    
}


//vectorreplace
void vectorreplace(void)
{
    vector <int> V = {1,2,3,4,5};
    vector <int> V2 = {6,7,8};
    V.insert(V.begin()+V.size(),V2.begin(),V2.end());

    

    for ( int x : V)
    {
        if(x % 2 == 0)
        {
            replace(V.begin(),V.end(),x,0);
        }
        else
        {
            replace(V.begin(),V.end(),x,1);
        }
        
    }
    cout<< endl;

    // Printing the vector
    for (int x : V)
    {
        cout << x << " ";
    }
    cout << endl;
    
}


//vectorFind
void vectorFind(void)
{
    vector <int> V = {1,6,3,9,5};
    vector <int> V2 = {6,7,8};
    V.insert(V.begin()+V.size(),V2.begin(),V2.end());

    // vector<int> :: iterator it;

    auto it = find(V.begin(),V.end(),2);
    // cout << *it << endl;
    if(it == V.end())
    {
        cout << " Not Found \n";
    }
    else
    {
        cout << "Found \n";
    }
}



//vectorAccess
void vectorAccess(void)
{
    vector <int> V = {1,6,3,9,5};
    vector <int> V2 = {6,7,8};
    V.insert(V.begin()+V.size(),V2.begin(),V2.end());

    // cout << V.back() << " \n";
    // cout << V.front()<< " \n";

    vector<int> :: iterator it;

    for (it = V.begin(); it < V.end(); it++)
    {
        cout<< *it << " ";
    }
    cout<<"\n";
}



//vectorInput
void vectorInput(void)
{
    int N ; 
    cout << "Enter Vector Size : ";
    cin >> N;

    vector<int>V;
    // vector<int>V(N);

    for (int i = 0; i < N; i++)
    {
        int item ;
        cin >> item;
        V.push_back(item);
        // cin >> V[i];

    }

    for (int i = 0; i < N; i++)
    {
        cout << V[i] << " ";
    }
    cout << "\n";
    
}

int main()
{
    
    // initialization();
    // capacity();
    // modifiers();
    // VectorInsert();
    // VectorErese();
    // vectorreplace();
    // vectorFind();
    // vectorAccess();

    vectorInput();

    return 0;
}