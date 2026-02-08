#include <bits/stdc++.h>
using namespace std;

// int linearSearch(vector<int> &arr, int key)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == key)
//         {
//             if (arr[i] > 5)
//                 return key * 2;
//             else
//                 return key / 2;
//         }
//     }
// }

int main()
{
    vector<int> arr;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return key;
        }
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}