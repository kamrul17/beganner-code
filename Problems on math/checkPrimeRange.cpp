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

vector<int> PrintPrimesbwrange(int a, int b)
{
    vector<int> ans;
    while (a <= b)
    {
        if (checkprime(a))
        {
            ans.push_back(a);
        }
        a++;
    }
    return ans;
}
int main()
{
    int a = 11, b = 17;
    vector<int> ans = PrintPrimesbwrange(a, b);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
