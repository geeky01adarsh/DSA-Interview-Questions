#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> fromBegin(n);
    fromBegin[0] = 1;
    vector<int> fromLast(n);
    fromLast[0] = 1;

    for (int i = 1; i < n; i++)
    {
        fromBegin[i] = fromBegin[i - 1] * nums[i - 1];
        fromLast[i] = fromLast[i - 1] * nums[n - i];
    }

    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        res[i] = fromBegin[i] * fromLast[n - 1 - i];
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        vector<int> v = productExceptSelf(nums);
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
}
