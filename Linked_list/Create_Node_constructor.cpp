#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int Val;
    Node *next;

    Node(int Val)
    {
        this->Val = Val;
        this->next = NULL;
    }
};

int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    
    a.next = &b;
    b.next = &c;

    cout << a.Val << " , " << a.next->Val << " , " << a.next->next->Val << "\n";

    return 0;
}