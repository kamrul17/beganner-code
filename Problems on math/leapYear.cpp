#include <bits/stdc++.h>
using namespace std;
bool yyear(int year)
{
    if (year % 400 == 0 || year % 4 == 0 && (year % 100 != 0))
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

    int year;
    cin >> year;
    if (yyear(year))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}