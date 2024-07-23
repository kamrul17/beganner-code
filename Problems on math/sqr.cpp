#include <iostream>
using namespace std;
// using binary search
int findsqrt(int n)
{
    int l = 1;
    int h = n;
    int ans = 0;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (mid * mid <= n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int ans = findsqrt(n);
    cout << ans;
    return 0;
}