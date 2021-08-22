#include <bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    vector<bool> ans;
    int maxi = 0, n = candies.size();
    for (int i = 0; i < n; i++)
    {
        maxi = max(candies[i], maxi);
    }
    for (int j = 0; j < n; j++)
    {
        if (candies[j] + extraCandies >= maxi)
            ans.push_back(1);
        else
            ans.push_back(0);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, extraCandies;
        cin >> n >> extraCandies;
        vector<int> candies;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            candies.push_back(temp);
        }
        vector<bool> v = kidsWithCandies(candies, extraCandies);
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
}