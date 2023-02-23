// Link of the question
// https://my.newtonschool.co/playground/code/aodmvu5nuds1

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    long int a,b,k,c=0;
    cin>>a>>b>>k;
    if(a>=1 && a<=b && b<=pow(10,9) && k>=2 && k<=pow(10,9))
    {
        if(a==b)
                c=0;
        else
        {   
            for(long int i=a;i<b;i=i*k)
                c++;
        }
        cout<<c;
    }
    else 
    {
        cout<<c;
    }
    
    return 0;
}