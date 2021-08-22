#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int curr_sum = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] < nums[i])
            {
                curr_sum++;
            }
        }
        ans.push_back(curr_sum);
    }
    return ans;
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
        vector<int> v = smallerNumbersThanCurrent(nums);
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
}