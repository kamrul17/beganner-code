// Given an array, we have to find the sum of all the elements in the array.
#include <bits/stdc++.h>
using namespace std;
long long int solve(int array[], int size)
{

    long long int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += (double)array[i];
    }
    return sum;
}

int main()
{
    int array[] = {2, 3, -1, 6, 2147483647, 5};
    int size = sizeof(array) / sizeof(int);
    long long int ans = solve(array, size);
    cout << ans;
    return 0;
}