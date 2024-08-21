#include <bits/stdc++.h>
using namespace std;

// brute force
vector<int> BlockSwap(int arr[], int k, int n)
{
    vector<int> res;
    for (int i = k; i < n; i++)
    {
        res.push_back(arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        res.push_back(arr[i]);
    }
    return res;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;
    vector<int> ans = BlockSwap(arr, k, n);
    cout << "After Rotating the array " << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     return 0;
// }