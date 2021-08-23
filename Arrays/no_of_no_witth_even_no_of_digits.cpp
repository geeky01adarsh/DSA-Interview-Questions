#include <bits/stdc++.h>
using namespace std;

int findNumbers(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 10 && nums[i] <= 99)
            count++;
        else if (nums[i] >= 1000 && nums[i] <= 9999)
            count++;
        else if (nums[i] >= 100000 && nums[i] <= 999999)
            count++;
    }
    return count;
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
        cout<<findNumbers(nums)<<endl;
    }
}