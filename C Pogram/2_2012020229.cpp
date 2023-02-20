#include<bits/stdc++.h>
using namespace std;
int is_happy(int n){
    int remainder=0,sum=0;

    while(n>0){
        remainder=n%10;
        sum+=(remainder*remainder);
        n/=10;
    }
    return sum;
}

int main(){
    int n,happy;
    cin >> n;
    happy=n;
    while(happy!=1 && happy!=4){
        happy=is_happy(happy);
    }

    if(happy==1)
        cout << n << " is a happy number.";
    else
        cout << n << " is unhappy number.";
}
