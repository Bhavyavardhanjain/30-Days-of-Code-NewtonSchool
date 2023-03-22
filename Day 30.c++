// Link of the question
//https://my.newtonschool.co/playground/code/dlymuxihn7yn 

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin>>n;
    if(n>=1 && n<=100)
    {
        int c=0;
        for(int i=1;i<=9;i++)
        {
            for(int j=1;j<=9;j++)
            {
                if(i*j==n)
                {
                    c++;
                    break;
                }
            }
        }
        if(c>0)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    return 0;
}