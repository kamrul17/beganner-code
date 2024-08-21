#include <bits/stdc++.h>
using namespace std;
// REmove duplicate
// vector<int> removeDuplicates(int arr[], int n)
// {
//     unordered_set<int> set;
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         set.insert(arr[i]);
//     }
//     for (auto num : set)
//     {
//         ans.push_back(num);
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
int removeDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = removeDuplicates(arr, n);
    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < ans; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
