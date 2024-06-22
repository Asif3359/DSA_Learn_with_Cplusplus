#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int Val;
    Node *next;
};

int main()
{
    Node a, b, c;
    a.Val = 10;
    b.Val = 20;
    c.Val = 30;

    a.next = &b;
    b.next = &c;

    cout << a.Val << " , " << a.next->Val << " , "<< a.next->next->Val<< "\n";

    return 0;
}