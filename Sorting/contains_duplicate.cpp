#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    // approch 1 using unordered set and stl
    // return nums.size() > unordered_set<int>(nums.begin(), nums.end()).size();
    
    //  approach 2- efficient approach
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
            return 1;
    }
    return 0;
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
        cout << containsDuplicate(nums) << endl;
    }
    return 0;
}