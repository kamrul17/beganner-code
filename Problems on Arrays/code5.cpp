// Problem statement: Given an array, we have found the number of occurrences of each element in the array.

// Examples:

// Example 1:
// Input: arr[] = {10,5,10,15,10,5};
// Output: 10  3
// 	 5  2
//         15  1
#include <bits/stdc++.h>
using namespace std;
void countFreq(int array[], int size)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        mpp[array[i]]++;
    }
    for (auto &&i : mpp)
    {
        cout << i.first << "--------" << i.second << endl;
    }
}
void countFreq1(int arr[], int size)
{
    vector<bool> visited(size, false);
    for (int i = 0; i < size; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = true;
            }
        }
        cout << arr[i] << "--" << count << endl;
    }
}

int main()
{
    int array[] = {22, 33, 22, 6, 110};
    int size = sizeof(array) / sizeof(int);
    // countFreq(array, size);
    countFreq1(array, size);

    return 0;
}