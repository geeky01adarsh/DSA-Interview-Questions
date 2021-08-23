#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int x)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == x && i != j)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        vector<int> v = twoSum(nums, k);
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
}