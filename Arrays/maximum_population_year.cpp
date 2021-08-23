#include <bits/stdc++.h>
using namespace std;

int maximumPopulation(vector<vector<int>> logs){
    vector<int> years(2051,0);
    for(int i=0; i<logs.size(); i++){
        years[logs[i][0]]++;
        years[logs[i][1]]--;
    }
    for(int i=1950; i<2051; i++){
        years[i]+=years[i-1];
    }
    int max_po = INT_MIN;
    int ind;
    for(int i=2051; i>=1950; i--){
        if(years[i]>=max_po){
            ind = i;
            max_po = years[i];
        }
    }
    return ind;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> nums;
        for (int i = 0; i < n; i++)
        {
            int temp1, temp2;
            cin >> temp1>>temp2;
            nums.push_back({temp1, temp2});
        }
        cout<<maximumPopulation(nums)<<endl;
    }
}