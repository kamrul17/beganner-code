// input:
//  [1,2,4,7,7,5]
// Output:
//  Second Smallest : 2
// 	Second Largest : 5

#include <bits/stdc++.h>
using namespace std;

int secondLargest(int array[], int size)
{
    int largest = INT_MIN;
    int secondLarge = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > largest)
        {
            secondLarge = largest;
            largest = array[i];
        }
        else if (array[i] > secondLarge && array[i] != largest)
        {
            secondLarge = array[i];
        }
    }
    return secondLarge;
}
int secondSmall(int array[], int size)
{
    int small = INT_MAX;
    int secondSmall = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (array[i] < small)
        {
            secondSmall = small;
            small = array[i];
        }
        else if (array[i] < secondSmall && array[i] != small)
        {
            secondSmall = array[i];
        }
    }
    return secondSmall;
}
int main()
{
    int array[] = {2, 24, -1, 162, 110};
    int size = sizeof(array) / sizeof(int);
    int secondSmall1 = secondSmall(array, size);
    cout << "Second Small---> " << secondSmall1 << endl;
    int secondLargest1 = secondLargest(array, size);
    cout << "Second largest---> " << secondLargest1 << endl;
    return 0;
}