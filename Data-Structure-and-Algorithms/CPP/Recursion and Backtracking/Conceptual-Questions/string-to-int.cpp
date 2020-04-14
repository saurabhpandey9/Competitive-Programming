//Author @ Saurabh Pandey
// convert string to int e.g. "1234" to 1234

#include<bits/stdc++.h>
//#include<cmath> // header file for power and other mathematical tool
using namespace std;

int num=0;
void strtoint(string & c,int n){
    if(n==0){
        return;
    }
    
    // here ASCI value of '0' is 48 so just subsract it

    num+=int(c[n-1]-48)*(pow(10,(c.size()-n)));
    strtoint(c,n-1);
    return;
}



int main(){
    string c;
    getline(cin,c);
    strtoint(c,c.size());

    cout<<num<<endl;
    return 0;

}