#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string s) {
        
        set<char> st;
        for(int i=0; i<s.size(); i++)
            st.insert(s[i]);
        if(st.size()==26)
            return 1;
        return 0;
    }

int  main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<checkIfPangram(s)<<endl;
    }
    return 0;
}