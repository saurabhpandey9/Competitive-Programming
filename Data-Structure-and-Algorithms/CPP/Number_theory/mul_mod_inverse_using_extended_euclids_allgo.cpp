// Author @ Saurabh Pandey
//Multiplicative mode inverse using extended euclids algorithm
// For mod inverse to  be exist of (a^-1)% m  should be gcd(a,m) =1
// necessary condition for mul mod inv to be exist gcd(a,m)=1
#include<iostream>
using namespace std;

// to check gcd(a,m)=1 
int gcd(int a,int m){
    return (m==0? a:gcd(m,a%m));
}

// inverse using extended algorithm
int x,y;
void extended_euclid_algo(int a ,int m){ // extended euclid algo
    if(m==0){
        x=1;
        y=0;
        return ;
    }
    extended_euclid_algo(m,a%m);
    int crx=y;
    int cry=x-(a/m)*y;
    x=crx;
    y=cry;
}


// driver code to run both function
void mod_inv(int a,int m){
    int falg=a>m? gcd(a,m):gcd(m,a);
    if(falg==1){
        extended_euclid_algo(a,m);
        // this step is done to get positive inverse 
        x=(x+m)%m;  
        cout<<"Inverse="<<x<<endl;
    }
    else{
        cout<<"Inverse not possible"<<endl;
    }
}

// main function 
int main(){
    int a,m;
    cout<<" For (a^-1)%m Enter a , m =";
    cin>>a>>m;
    cout<<endl;
    mod_inv(a,m);
    return 0;
}