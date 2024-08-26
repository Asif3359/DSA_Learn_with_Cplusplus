class Solution {
    int delete_from_heap(vector<int> &v)
    {
        int value = v.front();
        swap(v[0], v[v.size() - 1]);
        v.pop_back();

        int curr_idx = 0;
        int n = v.size();

        while (true)
        {
            int left_idx = 2 * curr_idx + 1;
            int right_idx = 2 * curr_idx + 2;
            int largest_idx = curr_idx;

            if (left_idx < n && v[left_idx] > v[largest_idx])
            {
                largest_idx = left_idx;
            }

            if (right_idx < n && v[right_idx] > v[largest_idx])
            {
                largest_idx = right_idx;
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

        return value ;
    }
public:
    int maxProduct(vector<int>& nums) {
        vector<int> v ;
        for(int x : nums)
        {
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

        int top1 = delete_from_heap(v);
        int top2 = delete_from_heap(v);

        return (top1-1) * (top2-1);

    }
};

