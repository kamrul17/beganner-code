#include <bits/stdc++.h>
using namespace std;
void reverseArr(int array[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        int temp = array[s];
        array[s] = array[e];
        array[e] = temp;
        s++;
        e--;
    }
}
void printArray(int array[], int size)
{
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int array[] = {2, 3, -1, 6, 110};
    int size = sizeof(array) / sizeof(int);
    reverseArr(array, size);
    printArray(array, size);
    return 0;
}