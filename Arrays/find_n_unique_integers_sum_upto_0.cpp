#include <bits/stdc++.h>
using namespace std;

vector<int> sumZero(int n)
{
    vector<int> ans;
    int itr = 0;
    if(n==0) return {0};
    if (n % 2)
        for (int i = 0; i <= n / 2; i++)
        {
            ans.push_back(itr);
            if (i)
            {
                ans.push_back(0 - itr);
            }
            itr++;
        }
    else
    {
        itr = 1;
        for (int i = 0; i < n / 2; i++)
        {

            ans.push_back(0 - itr);
            ans.push_back(itr);
            itr++;
        }
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
        cin >> n;
        vector<int> v =sumZero(n);
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}