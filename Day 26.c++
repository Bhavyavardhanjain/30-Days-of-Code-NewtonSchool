// Link of the question
//https://my.newtonschool.co/playground/code/ms8gu8tnrrcs

#include<bits/stdc++.h>
using namespace std;
long long a,b,c,k,r;
int main(){
    cin>>a>>b>>c>>k;
    if(a>=k){
    	cout<<k<<endl;
    	return 0;
	}
	r+=a;
	k-=a;
	if(b>=k){
		cout<<r<<endl;
		return 0;
	}
	cout<<r-k+b<<endl;
}