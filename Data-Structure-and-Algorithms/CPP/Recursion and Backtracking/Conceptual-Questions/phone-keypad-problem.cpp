//Author @ Saurabh Pandey
// Q: given number as like 23 of keypad we need to print all posible combination of key at that 
// key for EX for 23
// answere is AD,AE,AF,BD,BE,BF,CD,CE,CF,

#include<iostream>
using namespace std;

char keypad[][5]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void phonekeypad(char *input,char *output,int i,int j){
    if(input[i]=='\0'){
        output[i]='\0';
        cout<<output<<",";
        return;
    }

    int digit=input[i]-'0';
    // this if else is used to avoid null cases at key 1 and 0 as they don't have any characters
    if(digit==0 || digit==1){ 
        phonekeypad(input,output,i+1,j);
        return ;
    }
    for(int k=0;keypad[digit][k]!='\0';k++){
        // cout<<k<<endl;
        output[j]=keypad[digit][k];
        phonekeypad(input,output,i+1,j+1);
    }
    return;
}


int main(){
    char input[100];
    char output[100];

    cin>>input;
    phonekeypad(input,output,0,0);
    return 0;
}