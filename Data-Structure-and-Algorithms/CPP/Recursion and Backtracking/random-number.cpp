#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cin>>n;
    // srand(time(NULL)); // this is seed value if it remains same like srand(1) 
                            //it will always give same value

    for (int i=n;i>0;i--){
        cout<<(rand()%100)<<" ";
    }
}