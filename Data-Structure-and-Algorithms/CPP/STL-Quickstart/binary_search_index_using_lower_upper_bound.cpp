#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,10,40,40,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    auto lb=lower_bound(arr,arr+n,key); //try to understand the difference
    auto ub=upper_bound(arr,arr+n,key);

    cout<<"Lower bound of"<<key <<"is=" <<lb-arr <<endl <<"Upper bound of"<<key<<"is="<<ub-arr;

    return 0;
    
}