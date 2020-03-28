// Author @ Saurabh Pandey
// HCF or GCD using euclid's Algorithm
// Time complexity is O(log max(a,b))
#include<iostream>
using namespace std;

int gcd(int a,int b){  // here a < b this condition must follow
    if(a==0){
        return b;
    }
    else{
        return gcd(b%a,a);
    }
}


int main(){

    cout<<"----------------GCD of a , b using Euclid Algorithms----------------"<<endl;
    cout<<" Enter a & b "<<endl;
    int a,b;
    cin>>a>>b;
    cout<<endl;
    cout<<"gcd is "<<(a<b ? gcd(a,b):gcd(b,a)) <<endl;

    return 0;
}