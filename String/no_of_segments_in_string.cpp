#include <bits/stdc++.h>
using namespace std;

int countSegments(string s)
{
    if (!s.size())
        return 0;
    if (s.size() == 1 and s[0] == ' ')
        return 0;
    int count = 0;
    bool ck = 0;
    if (s[0] != ' ')
        count++;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == ' ')
        {
            ck = 1;
            if (s[i + 1] != ' ')
            {
                count++;
            }
        }
    }
    if (count == 1 && ck)
        return --count;
    return count;
}


int main(){
    string s;
    getline(cin,s);
    cin.ignore();
    cout<<countSegments(s);
    return 0;
}