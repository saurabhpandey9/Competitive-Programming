// Author @ Saurabh Pandey
// Algorithm to calculate (a^b % m ) fast modulo exponentiation algorithm
// Time Complexity O(log b)  in a^b
#include<iostream>
using namespace std;

#define ll long long  // her we do not need to place ; do remeber

ll fast_modulo_exponentiation(int a,int b,int m){
    int result=1;
    while(b){
        if(b&1){
            result=(result*a)%m;
            }
        a=(a*a)%m;
        b=b>>1;
    }

    return (result%m);
}

int main(){
    int a,b,m;
    cin>>a>>b>>m;
    cout<<"---------------------Answer of a^b %m ------------------------";
    cout<<"modulo_exponentiation of a^b % m ="<<fast_modulo_exponentiation(a,b,m)<<endl;

    return 0;
}