#include <bits/stdc++.h>
using namespace std;
int findSmallNum(int array[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {

        if (array[i] > maxi)
        {
            maxi = array[i];
        }
    }
    return maxi;
}
int main()
{
    int array[] = {2, 3, -1, 6, 110};
    int size = sizeof(array) / sizeof(int);
    int ans = findSmallNum(array, size);

    cout << ans;
    return 0;
}