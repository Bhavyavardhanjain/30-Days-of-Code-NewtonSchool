// Link of the question
// https://my.newtonschool.co/playground/code/56ghvna017tf

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n=26;
    char arr[n];
    int x;
    for(int i=0;i<26;i++)
    {
        cin>>x;
        if(x>=1 && x<=26)
        {
            cout<<char(x+96);
        }
    }
    return 0;
}
