#include <bits/stdc++.h>
using namespace std;
// Push the max to the last by adjacent swap
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
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
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}