#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int n = nums1.size(), m = nums2.size();
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (nums1[i] == nums2[j])
        {
            if (ans.empty())
                ans.push_back(nums1[i]);
            else if (!ans.empty() && ans[ans.size() - 1] != nums1[i])
                ans.push_back(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i] > nums2[j])
            j++;
        else
            i++;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;
        vector<int> nums1;
        vector<int> nums2;
        for (int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;
            nums1.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums2.push_back(temp);
        }
        vector<int> ans = intersection(nums1, nums2);
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}