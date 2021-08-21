#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
        ans.push_back(nums[i]);
    for (int i = 0; i < nums.size(); i++)
        ans.push_back(nums[i]);
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
        vector<int> v = getConcatenation(nums);
        for(auto i:v)
            cout<<i<<" ";
        cout<<endl;
    }
}