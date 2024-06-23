#include <bits/stdc++.h>

using namespace std;

// & 
void fun (int *&p)
{
    cout << &p << "\n";
}

int main()
{
    int val = 10;
    int *ptr = &val;

    fun(ptr);

    cout << &ptr << "\n";
    return 0;
}