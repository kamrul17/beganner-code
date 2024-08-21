/*Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

Examples:

Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.*/
#include <bits/stdc++.h>
using namespace std;
void solve(int array[], int size)
{
    sort(array, array + size);
    for (int i = 0; i < size / 2; i++)
    {
        cout << array[i] << " ";
    }
    for (int i = size - 1; i >= size / 2; i--)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array[] = {2, 3, -1, 6, 110, 5};
    int size = sizeof(array) / sizeof(int);
    solve(array, size);
    return 0;
}