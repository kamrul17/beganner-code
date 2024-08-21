#include <bits/stdc++.h>
using namespace std;
// find average
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int avg = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = sum / n;
    cout << avg;
    return 0;
}