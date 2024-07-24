#include <bits/stdc++.h>
using namespace std;
float SumofGP(float a, float r, int n)
{
    float sum = a * (pow(r, n) - 1) / (r - 1);
    return sum;
}
// float SumofGP(float a, float d, int n)
// {
//     float sum = 0;
//     while (n > 0)
//     {
//         sum += a;
//         a += d;
//         n--;
//         cout << n << endl;
//     }
//     return sum;
// }

int main()
{
    float a = 2; // First Term of G.P.
    float r = 2; // Common Ration of G.P.
    int n = 4;   // Number of terms in a G.P.
    cout << "Sum of GP Series is " << SumofGP(a, r, n);
    return 0;
}