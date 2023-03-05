// Link of the question
// https://my.newtonschool.co/playground/code/1gy7bkjkkxt1

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
 // Your code here
    long a,b;

    cin>>a>>b;

    while(a>0 && b>0)
    {

        // cout<<(a%10) <<"+"<< (b%10)<<endl;
        if(((a%10) + (b%10)) >9)
        {
            cout<<"Hard";
            // cout<<a<<endl<<b;
            return 0;
        }

        a=a/10;
        b=b/10;


    }

    cout<<"Easy";
    return 0;
}