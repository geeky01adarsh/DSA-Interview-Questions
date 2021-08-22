#include <bits/stdc++.h>
using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count =0; 
        for(int i=0; i<items.size(); i++){
            if(ruleKey=="type")
                if(items[i][0]==ruleValue)
                    count++;
            if(ruleKey == "color")
                if(items[i][1]==ruleValue)
                    count++;
            if(ruleKey == "name")
                if(items[i][2]==ruleValue)
                    count++;
        }
        return count;
    }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ruleKey, ruleValue;
        cin>>ruleKey>>ruleValue;
        vector<vector<string>> items;
        for(int i=0; i<n; i++){
            vector<string> s;
            for(int j=0; j<3; j++){
                string temp;
                cin>>temp;
                s.push_back(temp);
            }
            items.push_back(s);
        }
        cout<<countMatches(items, ruleKey, ruleValue)<<endl;
    }
    return 0;
}