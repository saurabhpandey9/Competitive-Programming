//Author @ Saurabh Pandey
//Chinese remainder theorem for calculation system of linear conngurance
// X%2=1
// X%3=2
// X%7=5
// calculate X

#include<bits/stdc++.h>
using namespace std;

// gcd using euclid algo 

int gcd(int a,int m){
        return m==0 ? a:gcd(m,a%m);
    }


// extended euclid algorithm for mod inverse
int x,y;
void extended_euclid(int a,int m){

    if(m==0 ){
        x=1;
        y=0;
        return ;
    }

    extended_euclid(m,a%m);
    int crx=y;
    int cry=x-(a/m)*y;
    x=crx;
    y=cry;

}

int inverse(int a,int m){ // here a>m for all
    int falg=a>m? gcd(a,m):gcd(m,a);
    if(falg==1){
        extended_euclid(a,m);
        return (x+m)%m;
    }
}

// chinese remainder theorem
// product=num[0]*num[1]--------*num[N-1]
// pp[i]=(product/number[i])
// X= summation from [0-(N-1)] { remainder[i]* pp[i]  * mod Inverse of pp[i] % number[i] }
// finally X= X% product
int CTR(int *num,int *remainder,int n){
    int product=1;
    int result=0;
    for (int i=0;i<n;i++){
        product*=num[i];
    }

    for (int i=0;i<n;i++){
        int pp=product/num[i];
        result+=remainder[i]*pp*inverse(pp,num[i]); // implimentation of above formula (CRT)
    }

    return result%product;
}


int main(){

    cout<<"Enter no of equation"<<endl;
    int n;
    cin>>n;

    int num[n],remainder[n];

    cout<<"Enter Number and remainder for [ X % num = remainder ]"<<endl;
    for (int i=0;i<n;i++){
        cin>>num[i]>>remainder[i];
    }
    cout<<"The value X ="<< CTR(num,remainder,n);

    return 0;
}