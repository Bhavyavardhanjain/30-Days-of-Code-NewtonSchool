// Link of the question
// https://my.newtonschool.co/playground/code/32cy4tm9fxoq

#include <bits/stdc++.h>

int main() {
    //Your code here
    int n,a,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a>10) count+=a-10;
    }
    printf("%d",count);
    return 0;
}