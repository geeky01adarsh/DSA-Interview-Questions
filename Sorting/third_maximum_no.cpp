#include <bits/stdc++.h>
using namespace std;

int thirdMax(vector<int> &nums)
{
    set<int> top3;
    for (int num : nums)
    {
        top3.insert(num);
        if (top3.size() > 3)
            top3.erase(top3.begin());
    }
    return top3.size() == 3 ? *top3.begin() : *top3.rbegin();
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
        cout << thirdMax(nums) << endl;
    }
    return 0;
}