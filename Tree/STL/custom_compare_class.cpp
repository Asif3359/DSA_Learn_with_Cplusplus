#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int number;

    Student(string name, int roll, int number)
    {
        this->name = name;
        this->roll = roll;
        this->number = number;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.number > b.number)
        {
            return true;
        }
        else if (a.number < b.number)
        {
            return false;
        }
        else
        {
            if (a.roll > b.roll)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    while (n--)
    {
        string name;
        int roll, number;
        cin >> name >> roll >> number;
        Student obj(name, roll, number);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " ";
        cout << pq.top().roll << " ";
        cout << pq.top().number << " \n";
        pq.pop();
    }
    

    return 0;
}