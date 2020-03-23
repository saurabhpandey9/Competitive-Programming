//using this library we can know whether particular number is present in given 
//array or not in log(N)
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={1,5,7,18,19};
    int n=sizeof(arr)/ sizeof(int);
    int key;
    cin>> key;
    bool id=binary_search(arr,arr+n,key);
    if(id){
        cout << "Present" <<endl;
    }
    else{
        cout<< "Not Present"<<endl;
    }
    return 0;
}
