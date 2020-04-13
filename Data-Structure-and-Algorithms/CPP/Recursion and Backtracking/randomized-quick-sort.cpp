//author @ Saurabh Pandey
// Randomized Quick sort using recursion
// T C O(n log n) always

#include<iostream>
#include<ctime>
#include<cstdlib>
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

void Randomized(int *arr,int n){

    srand(time(NULL)); // seed value of rand function

    int i=n;

    while(i>=0){
        swap(arr[i],arr[rand()%(i+1)]);
        i--;
    }
    return;

}

int main(){

    int n;
    cin>>n;



    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Randomized(arr,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quicksort(arr,0,n-1);

    // sorted array 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
    
}