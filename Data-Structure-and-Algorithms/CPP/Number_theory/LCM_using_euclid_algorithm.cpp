// Author @ Saurabh Pandey
// LCM using euclid's Algorithm
// As we know LCM (a,b) * GCD(a,b) == a*b 
//Time complexity is O(log max(a,b))
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

int lcm(int a,int b){

    return (a*b)/(a<b ? gcd(a,b):gcd(b,a));

}


int main(){

    cout<<"----------------LCM of a , b using Euclid Algorithms----------------"<<endl;
    cout<<" Enter a & b "<<endl;
    int a,b;
    cin>>a>>b;
    cout<<endl;
    cout<<"LCM is "<<lcm(a,b) <<endl;

    return 0;
}