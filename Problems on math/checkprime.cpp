#include <bits/stdc++.h>
using namespace std;

bool checkprime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// bool checkprime(int n)
// {
//     int count = 0;
//     for (int i = 1; i <= sqrt(n); i++)
//     {

//         if (n % i == 0)
//         {
//             count++;
//             if (n / i != i)
//             {
//                 count++;
//             }
//         }
//     }
//     if (count == 2)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
int main()
{
    int n;
    cin >> n;
    if (checkprime(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
