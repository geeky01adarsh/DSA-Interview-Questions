#include <bits/stdc++.h>
using namespace std;

vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=k;
        reverse(num.begin(),num.end());
        
        for(int i=0;i<num.size();i++ )
        {
            int sum=num[i]+carry;
            num[i]=sum%10;
            carry=sum/10;
            
        }
        if(carry!=0)
        {
            while(carry)
            {
                num.push_back(carry%10);
                carry=carry/10;
            }
        }
        reverse(num.begin(),num.end());
        return num;
    }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            nums.push_back(temp);
        }
        vector<int> v = addToArrayForm(nums, k);
        for(auto i:v)
            cout<<i<<" ";
        cout<<endl;
    }
}