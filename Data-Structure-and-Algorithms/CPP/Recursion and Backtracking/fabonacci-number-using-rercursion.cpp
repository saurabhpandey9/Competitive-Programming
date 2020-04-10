//Author @ Saurabh Pandey
// fabonacci number using rercursion 0 1 1 2 3 5 8 -------
// f(n)=f(n-1)+f(n-2)

#include<bits/stdc++.h>
using namespace std;

// this function gives the nth term of fabonacci series
int fabonacci(int n){

    if(n==0 || n==1){
        return n;
    }

    return fabonacci(n-1)+fabonacci(n-2);
}


int main(){
    int x;
    cin>>x;

    for(int i=0;i<=x;i++){
        cout<<fabonacci(i)<<" ";
    }

    
    
}