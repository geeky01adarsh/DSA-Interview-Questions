#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char> &letters, char target)
{
    if (letters.back() <= target)
        return letters.front();
    int low = 0, high = letters.size() - 1;
    while (low < high)
    {
        auto mid = (low + high) / 2;
        if (target < letters[mid])
            high = mid;
        else
            low = mid + 1;
    }
    return letters[low];
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char target;
        cin>>target;
        vector<char> v;
        for(int i=0; i<n; i++){
            char temp;
            cin>>temp;
            v.push_back(temp);
        }
        cout<<nextGreatestLetter(v, target)<<endl;
    }
    return 0;
}