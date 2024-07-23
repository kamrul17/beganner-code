/*Example 1:
Input: min = 10 , max = 50
Output: 11 22 33 44
Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.
*/
#include <iostream>
#include <vector>
using namespace std;
// using binary search
vector<int> solve(int mini, int maxi)
{
    vector<int> ans;

    for (int i = mini; i <= maxi; i++)
    {
        int revNum = 0;
        int dup = i;
        while (dup > 0)
        {
            // last digitko nikalo
            int lastdigit = dup % 10;
            // reverse karo lastdigit ko zor kr
            revNum = (revNum * 10) + lastdigit;
            // last digit ko delete karo
            dup = dup / 10;
        }
        if (i == revNum)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    int min = 10, max = 50;
    vector<int> ans = solve(min, max);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " -> ";
    }

    return 0;
}