// Link of the question
// https://my.newtonschool.co/playground/code/u0pzg19aqa83

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << (n / 2) * (n / 2);
    else
        cout << ((n - 1) / 2) * ((n + 1) / 2);
    return 0;
}
