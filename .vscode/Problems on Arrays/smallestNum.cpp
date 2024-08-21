#include <bits/stdc++.h>
using namespace std;
int findSmallNum(int array[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {

        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}
int main()
{
    int array[] = {2, 3, -1, 6, 10};
    int size = sizeof(array) / sizeof(int);
    int ans = findSmallNum(array, size);

    cout << ans;
    return 0;
}