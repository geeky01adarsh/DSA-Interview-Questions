#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    vector<int> sum;
    sum.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        sum.push_back(nums[i] + sum[i - 1]);
    }
    return sum;
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
        vector<int> v = runningSum(nums);
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}