// Link of the question
// https://my.newtonschool.co/playground/code/k65pm0beszf6

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    if(s.size()>t.size()) 
    {
        puts("No");
    }
    else 
    {
        bool ok=true;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]!=t[i]) 
            {
                ok=false;
            }
        }
 
        if(ok) cout<<"Yes";
        else cout<<"No";
    }
}