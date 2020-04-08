//Author @ Saurabh Pandey
// bubble sort 
//T.C. O(N*N)
#include<bits/stdc++.h>
using namespace std;

// First recursive method for bubble sort
void bblsort1(int * arr,int n){
    if(n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bblsort1(arr,n-1);
    return;
}


// Second recursive method for Bubble sort

void bblsortrec(int * arr, int j,int n){
    if(n==1){
        return;
    }

    if(j==n-1){
        bblsortrec(arr,0,n-1);
        return;
    }
    
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }

    bblsortrec(arr,j+1,n);
    return;

}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    // bblsort1(arr,n); // method 1 of bubble sort using recursion

    bblsortrec(arr,0,n);

    cout<<"Sorted array"<<endl;

    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}