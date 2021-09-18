#include <bits/stdc++.h>
using namespace std;

int titleToNumber(string s) {
        if(s.size()==1) return (s[0]-'A')+1;
        int ans = 0;
        int n = s.size();
        long long prev=26; 
        for(int i=n-2; i>=0; i--){
            ans += ((s[i]-'A')+1)*prev;
            prev*=26;
        }
        ans += (s[n-1]-'A')+1;
        return ans;
    }

int main(){
    string s;
    cin>>s;
    cout<<titleToNumber(s)<<endl;
    return 0;
}