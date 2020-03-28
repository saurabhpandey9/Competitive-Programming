// Author @ Saurabh Pandey
// Sieve of Eratosthenes Algorithm implementation
#include<iostream>
#include<math.h>
using namespace std;
bool check_prime(int n){
    if(n==1){
        return false;
    }
    else if(n==2){
        return true;
    }
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}

bool prime_number(bool *p,int number){

    p[0]=false;
    p[1]=false;

    for(int i=2;i*i<=number;i++){
        if(check_prime(i)){
            for (int j=i*i;j<=number;j+=i){
                p[j]=false;
                
            }
        
        }
    }


}

int main(){
    cout<<"--------------------------Seive of Eratosthenes------------------------"<<endl;
    int number;
    cout<<"Enter the Number=";
    cin>>number;

    bool prime[number+1]; // array form 0 to number

    // initialization of all number from 0 to numbere as prime i.e true (initial assumption)
    for(int i=0;i<=number;i++){
        prime[i]=true;
    }

    prime_number(prime,number); // calling function for generation of prime no from 0 to number


    cout<<"----------------Prime number between 0 to N-----------------"<<endl;
    for(int i=0;i<=number;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
        
    }

    cout<<endl;
}