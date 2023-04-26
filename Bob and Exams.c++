// Link of the question
// https://my.newtonschool.co/playground/code/tst05oeqg5di

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b,c=0;
    cin>>a>>b;
    if(a>=0 && a<=7 && b>=0 && b<=7)
    {
        
        if(a==0 || b==0)
        {
            c=a+b;
        }
        else if(a==7 || b==7 || (a==1 && b==6) || (a==6 && b==1) || (a==2 && b==5) || (a==5 && b==2) || (a==4 && b==3) || (a==3 && b==4))
        {
            c=7;
        }
        else if(a==b)
        {
            c=a;
        }
        else if(a==1 || a==2 || a==4)
        {
            c=b;
        }
        else if(b==1 || b==2 || b==4)
        {
            c=a;
        }
        if(a==1 || a==2 || a==4)
        {
            if(b==1 || b==2 || b==4)
            {
                c=a+b;
            }
        }
        cout<<c;
    }
    return 0;
}
