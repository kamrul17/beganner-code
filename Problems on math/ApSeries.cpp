#include <iostream>
using namespace std;
float sumofAp(float a, float d, int n)
{
    float sum = (n / 2.0) * (2.0 * a + (n - 1) * d);
    return sum;
}
// float sumofAp(float a, float d, int n)
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
    float a = 1.5, d = 3;
    int n = 5;
    cout << "Sum of Given Ap Series: " << sumofAp(a, d, n) << endl;
}