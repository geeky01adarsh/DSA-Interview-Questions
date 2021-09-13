#include <bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int temp1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
    int temp2 = nums[0] * nums[1] * nums[n - 1];
    return max(temp1, temp2);
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
        cout << maximumProduct(nums) << endl;
    }
    return 0;
}