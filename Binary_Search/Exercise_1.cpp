#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int Key;
    cin >> Key;

    int left = 0;
    int right = N - 1;
    bool found = false;
    int count = 0 ;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == Key)
        {
            count ++ ;
            if ((mid > 0 && arr[mid - 1] == Key) || (mid < N - 1 && arr[mid + 1] == Key))
            {
                count ++ ;
                found = true;
                break;
            }
            else
            {
                right = mid - 1;
            }
        }
        else if (arr[mid] < Key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << (count>1 ? "true" : "false") << endl;

    delete[] arr;

    return 0;
}
