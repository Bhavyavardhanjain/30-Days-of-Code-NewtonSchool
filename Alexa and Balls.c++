// Link of the question
// https://my.newtonschool.co/playground/code/p5h203owyjhy

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long int A, D, B, C, operations = 0;
    cin >> A >> B >> C >> D;
    long int red = 0;
    if(B >= C * D)
        operations = -1;
    else
    {
        while(A > red * D)
        {
            A += B;
            red += C;
            operations++;
        }
    }
    cout << operations << endl;
    return 0;
}
