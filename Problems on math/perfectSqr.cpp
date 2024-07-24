#include <iostream>
using namespace std;
bool isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n - 1; i++)
    {

        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
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
    if (isPerfect(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}