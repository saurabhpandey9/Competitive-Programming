//Author @ Saurabh Pandey
//Tower of hanoi
// here we are moving from A-> B here C is helper stand
#include<iostream>
using namespace std;

void toh(int n,string source,string destination,string helper){
    if(n==0){
        return;
    }

    // move n-1 disks from source to helper
    toh(n-1,source,helper,destination); 

    cout<<endl;
    // move nth ie remaining disk from source to destination
    cout<<n<<" move from "<<source<<" to "<<destination<<endl;

    // move n-1 disks from helper to destination
    // it is as simple as 2 minute maggie ("ha ha")
    toh(n-1,helper,destination,source);
    return;

}

int main(){
    int n;
    cin>>n;
    toh(n,"A","B","C");
}