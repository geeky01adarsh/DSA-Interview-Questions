#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int chk = nums.size() / 2;
    if (nums.size() == 1)
        return nums[0];
    if (nums.size() == 2)
    {
        return nums[0];
    }
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int temp = 0;
        while (nums[i] == nums[i + 1])
        {
            temp++;
            i++;
        }

        if (temp >= chk)
            return nums[i - 1];
    }
    return -1;
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
        cout << majorityElement(nums) << endl;
    }
    return 0;
}