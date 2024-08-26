#include <bits/stdc++.h>
using namespace std;

void delete_from_heap(vector<int> &v)
{
    swap(v[0], v[v.size() - 1]);
    v.pop_back();

    int curr_idx = 0;
    int n = v.size();

    while (true)
    {
        int left_child_idx = 2 * curr_idx + 1;
        int right_child_idx = 2 * curr_idx + 2;
        int largest_idx = curr_idx;

        if (left_child_idx < n && v[left_child_idx] > v[largest_idx])
        {
            largest_idx = left_child_idx;
        }

        if (right_child_idx < n && v[right_child_idx] > v[largest_idx])
        {
            largest_idx = right_child_idx;
        }

        if (largest_idx != curr_idx)
        {
            swap(v[curr_idx], v[largest_idx]);
            curr_idx = largest_idx;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    vector<int> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);
        int curr_idx = v.size() - 1;

        while (curr_idx != 0)
        {
            int parent_idx = (curr_idx - 1) / 2;
            if (v[parent_idx] < v[curr_idx])
            {
                swap(v[parent_idx], v[curr_idx]);
            }
            else
            {
                break;
            }

            curr_idx = parent_idx;
        }
    }

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    delete_from_heap(v);

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}