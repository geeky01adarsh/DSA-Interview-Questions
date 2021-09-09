#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int low =0, high =nums.size()-1;
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[nums.size()-1]!=nums[nums.size()-2]) return nums[nums.size()-1];
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid-1]==nums[mid]){
                if(mid%2==0){
                    high = mid-2;
                }
                else 
                    low=mid+1;
            }
            else if(nums[mid+1]==nums[mid]){
                if((mid+1)%2)
                    low=mid+2;
                else 
                    high= mid-1;
            }
            else return nums[mid];
                
        }
        return -1;
    }

int main()
{
    int n, target;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    cout<<singleNonDuplicate(v)<<endl;
    return 0;
}