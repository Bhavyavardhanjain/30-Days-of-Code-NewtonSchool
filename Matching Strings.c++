// Link of the question
// https://my.newtonschool.co/playground/code/2liaycaeci7m

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
bool check(string s,string k,int a){
     bool x=true;
    for(int i=0;i<a;i++){
       
        
        if(s[i]!=k[i]){
            if(x){
            swap(s[i],s[i+1]);
            x=false;
            }
            if(s[i]!=k[i]) return false;
            
        }
    }
return true;
}

int main() {
	string s,t;
    cin>>s>>t;
    int a=s.length(),b=t.length();
    if(a!=b) cout<<"No"<<endl;
    else{
        if(check(s,t,a)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
