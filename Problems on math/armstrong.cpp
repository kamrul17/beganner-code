#include <iostream>
using namespace std;
bool solve(int n)
{
    int num = n;
    int ld = 0, prev = 0;
    while (num > 0)
    {
        ld = num % 10;
        prev = prev + ld * ld * ld;
        num = num / 10;
    }
    if (prev == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    if (solve(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}