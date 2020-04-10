//Author @ Saurabh Pandey
// calculation of a^ b using fast power method 
// Time complexity is log(b)

#include<bits/stdc++.h>
using namespace std;

int power(int x,int p){

    if(p==0){
        return 1;
    }

    int ans=power(x,p/2);
    ans*=ans;

    if(p%2==1){  // to check whether the given power is odd or not 
        return x*ans;
    }
    return ans;

}


int main(){
    int x,p;
    cin>>x>>p;
    cout<<power(x,p);
}