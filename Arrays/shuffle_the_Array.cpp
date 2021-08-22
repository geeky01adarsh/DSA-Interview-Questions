#include <bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[i]);
        ans.push_back(nums[i + n]);
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
        cin>>n;
        vector<int> nums;
        for(int i=0; i<2*n; i++){
            int temp; cin>>temp;
            nums.push_back(temp);
        }
        vector<int> v= shuffle(nums, n);
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}