// Author @ Saurabh Pandey
// input = abc
//output = abc,ab,ac,a,bc,b,c,,

#include<iostream>
using namespace std;

// here i = input char flag  & j = out char flag
void subsequence(char *in,char *out,int i,int j){
    if(in[i]=='\0'){  // here base condition is when input char array will be empty
        out[j]='\0' ;
        cout<<out<<",";
        // cout<<j<<endl;
        return ;
    }
    out[j]=in[i];
    subsequence(in,out,i+1,j+1);
    subsequence(in,out,i+1,j);
    return ;
}

int main(){
    char in[100];
    cin>>in;

    char out[100];

    subsequence(in,out,0,0);
    
}