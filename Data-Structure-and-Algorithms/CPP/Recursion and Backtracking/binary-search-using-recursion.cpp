//Author @ Saurabh Pandey
//binary search using recusrion
//T.C. O(logN)

#include<bits/stdc++.h>
using namespace std;


int binarysearch(int *arr,int key,int i,int n){
    int flag=(i+n)/2;
    if( i==n ){
        if(key==arr[i]){
            return i;
        }
        else{
            return -1;
        }

    }

    if(arr[flag]==key){
        return flag;
    }
    else{
        if(key>arr[flag]){
            return binarysearch(arr,key,flag+1,n);
        }
        else{
            return binarysearch(arr,key,i,flag-1);
        }
    }
}

int main(){

     int n;
    cin>>n;
    int arr[n];

    cout<<"Enter Sorted array in increasing order"<<endl;

    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    while(1){
        cout<<"Enter key=";
        int key;
        cin>>key;
        
        int flag=binarysearch(arr,key,0,n);
        if(flag==-1){
            cout<<"Element not found"<<endl;
        }
        else{
            cout<<"Element Found at position= "<<flag+1<<endl;
            
        }
    }

    return 0;
}