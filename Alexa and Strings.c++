// Link of the question
// https://my.newtonschool.co/playground/code/rx5ib44macmv

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string s;
    int j;
    cin>>s;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='a')
        {
            cout<<i+1;
            j=i;
            break;
        }
        else
        {
            j=-1;
        }

    }
    if(j==-1)
        cout<<-1;
    return 0;
}
