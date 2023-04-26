// Link of the question
// https://my.newtonschool.co/playground/code/ct92uubznl5x

#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
using ll = long long;
using ld = long double;
 
using pii = pair<int,int>;
using pl = pair<long long, long long>;
using pd = pair<double, double>;
 
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<long long>;
using vd = vector<double>;
using vs = vector<string>;
using vpi = vector<pii>;
using vpl = vector<pl>;
using vpd = vector<pd>;
 
const long long mod = 1e9 + 7;
const int pi = acos(-1);
 
long long binpow(long long a, long long b) {
    a %= mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll T = 1,N,i,j,Ans,M;
    string S,s;
    char ch;
    bool flag;
 
    // cin >> T;
 
    while(T--){
        cin >> N >> M;
 
        while(N % 200 == 0 && M){
            N /= 200;
            M--;
        }
 
        if(N <= 0){
            cout << N << "\n";
            return 0;
        }
 
        while(M > 0){
            if(N % 200 != 0){
                N = (N * 10) + 2;
                M--;
            }
 
            if(M <= 0){
                N *= 100;
                break;
            }
 
            N /= 2;
            M--;
        }
 
        cout << N << "\n";
    }
 
    return 0;
}
