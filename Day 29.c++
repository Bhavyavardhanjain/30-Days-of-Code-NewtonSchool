// Link of the question
//https://my.newtonschool.co/playground/code/fnoas1co6ipm 

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define printvector(A) {int N = int((A).size()); for (int i = 0; i < N; i++) {cout << (A)[i]; if (i == N - 1) cout << endl; else cout << " "; }}
using namespace std;
using ll = long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll ac = a * c;
    ll ad = a * d;
    ll bc = b * c;
    ll bd = b * d;
    cout << max(ac, max(ad, max(bc, bd))) << endl;
    return 0;
}