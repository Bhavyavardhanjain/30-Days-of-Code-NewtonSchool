// Link of the question
// https://my.newtonschool.co/playground/code/jqahutghau36

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int s,t,co=0;
    cin>>s>>t;
    if(s>=0 && s<=100 && t>=0 && t<=10000)
    {
        for(int a=0;a<100;a++)
        {
            for(int b=0;b<100;b++)
            {
                for(int c=0;c<100;c++)
                {
                    if(a+b+c<=s && a*b*c<=t)
                    {
                        co++;
                        
                    }
                }
            }
        
        }
        cout<<co;
    }
    return 0;
}
