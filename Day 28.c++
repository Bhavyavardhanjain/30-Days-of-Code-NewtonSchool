// Link of the question
//https://my.newtonschool.co/playground/code/v30nhakksxiz 

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
typedef long long ll;
 
int main() {
	// Your code here
    string s, t;
    cin >> s >> t;
    ll ans = INT_MAX;
    for(int i = 0; i < s.size()-t.size()+1; i++){
        string u = s.substr(i,t.size());
        ll c = 0;
        for(int j = 0; j < t.size(); j++){
            if(t[j] != u[j]) c++;
        }
        ans = min(ans, c);
    }
    cout << ans << "\n";
    return 0;
}