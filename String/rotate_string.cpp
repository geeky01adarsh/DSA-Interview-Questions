#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal)
{
    if (s.length() != goal.length()) 
    // if length of two string are different they can't be  rotation of each other.
        return false;
    string ans = s + s; 
    // SIMPLY CONCATENATE THE S STRING WITH ITSELF.

    if (ans.find(goal) != string ::npos) 
    // NOW FIND THE GOAL STRING is present in our conacatenated string or not if present return true else false.
        return true;
    return false;
}

int main()
{
    string s, g;
    cin >> s >> g;
    cout<<rotateString(s,g)<<endl;
    return 0;
}