#include <bits/stdc++.h>
using namespace std;
// find median
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    if (n % 2 == 0)
    {
        cout << "even: " << ((n / 2) + (n / 2 + 1)) / 2;
    }
    else
    {
        cout << "odd: " << (n / 2 + 1);
    }

    return 0;
}