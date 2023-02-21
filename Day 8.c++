// Lin of the question
// https://my.newtonschool.co/playground/code/mf980fl3ihps

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string a,b;
    int c=0;
    cin>>a;
    cin>>b;
    int j=0;
    for(int i=0;i<a.size();i++)
    {
        for(;j<b.size();)
        {
            if(a[i]==b[j])
            {
                c++;
                j++;
                break;
            }
            else
            {
                j=0;
                c=0;
                break;
            }
        }
    }
    if(c==b.size())
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}