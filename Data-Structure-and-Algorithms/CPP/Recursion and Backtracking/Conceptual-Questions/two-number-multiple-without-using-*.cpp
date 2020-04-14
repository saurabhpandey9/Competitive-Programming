//Author @ Saurabh Pandey
//multiply two number x and y without using * recursively

#include<bits/stdc++.h>
using namespace std;


int mul(int x,int y){
    if (y==0){
        return 0;
    }
    return x+mul(x,y-1);
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<mul(x,y);
}