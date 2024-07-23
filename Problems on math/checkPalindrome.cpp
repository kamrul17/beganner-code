#include <iostream>
using namespace std;
// using binary search
bool isPalindrome(int n)
{
    int revNum = 0;
    int dup = n;
    while (dup > 0)
    {
        // last digitko nikalo
        int lastdigit = dup % 10;
        // reverse karo lastdigit ko zor kr
        revNum = (revNum * 10) + lastdigit;
        // last digit ko delete karo
        dup = dup / 10;
    }
    if (n == revNum)
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
    if (isPalindrome(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}