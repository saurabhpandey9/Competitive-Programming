// Author @ Saurabh Pandey
// Extended Euclid Algorithm
// Have 2 major Application
// 1.Multiplicative modulo inverse 2. Linear diophantine Equation

#include<iostream>
using namespace std;

int x,y,gcd;
void extended_euclid(int a,int b){
    if(a==0){
        x=1;
        y=0;
        gcd=b; // it not need in this question btw
        return ;
    }
    extended_euclid(b%a,a);

    int cr_x,cr_y;
    cr_x=y;
    cr_y=x-((b/a)*y);
    x=cr_x;
    y=cr_y;

}

int main(){

    cout<<"-----------------Extended Euclid Algorithm-------------------"<<endl;
    cout<<"================For equation Ax+By=gcd(A,B)==================="<<endl;
    cout<<endl;
    int a,b;
    cin>>a>>b;

    (a<b ? extended_euclid(a,b):extended_euclid(b,a));
    cout<<"Value of X and Y"<<endl;
    cout<<x<<" "<<y<<endl;
    return 0;
}