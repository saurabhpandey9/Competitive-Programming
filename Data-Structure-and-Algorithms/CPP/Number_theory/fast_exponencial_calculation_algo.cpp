// Author @ Saurabh Pandey
// Algorithm to calculate exponential faster a^b 
// Time Complexity O(log b)  in a^b
#include<iostream>
using namespace std;

#define ll long long  // her we do not need to place ; do remeber

ll fast_power(int a,int b){
    int result=1;
    while(b){
        if(b&1){
            result=result*a;
            }
        a=a*a;
        b=b>>1;
    }

    return result;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"Power of a^b ="<<fast_power(a,b)<<endl;

    return 0;
}