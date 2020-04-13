//author @ Saurabh Pandey
// Quick sort using recursion
// Average case T C O(n log n)
// Its a inplace algorithms as it doesnt required exxtra space allocation like in merge sort
#include<iostream>
using namespace std;


int divide(int *arr,int s,int e){

    int i=s-1;
    int j=s;
    // we will a take last element ie. arr[e] as pivot

    while(j<e){
        if(arr[j]<arr[e]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }

    swap(arr[++i],arr[e]);

    return i;


}

void quicksort(int *arr,int s,int e){
    if(s>=e){
        return;
    }

    int p=divide(arr,s,e); // here p will give the exact position of pivot in array
    // as the element at p position is already sort so,

    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);

    return;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);

    // sorted array 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    
}