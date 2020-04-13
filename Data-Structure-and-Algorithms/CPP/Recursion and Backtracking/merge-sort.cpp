//Author @ Saurabh Pandey
//Merge sort using recursion
//Time complexity O(N log N)

#include<iostream>
using namespace std;


void merge(int *arr,int s,int e){

    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=0;
    int temp[s+e];

    while(i<=mid && j<=e){  // we are putting the element in temp array in ascending order
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }

    // copying the remaining element to temporary array
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }

    //Copying the element from sorted temp to original array
    k=0;
    for(;s<=e;s++){
        arr[s]=temp[k++];
    }
    return;
}

void mergesort(int *arr,int s,int e){
    if(s>=e){
        return ;
    }

    int mid=(s+e)/2;

    // splitting the array in sub array
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    // We will merge two array along with sortng 
    merge(arr,s,e);
    return;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergesort(arr,0,n-1);

    cout<<"Sorted array"<<endl;

    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

}

