#include<stdio.h>

void merge(long long arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    long long L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(long long arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

int main()
{
int n;
scanf("%d",&n);

for(int x=0;x<n;x++){
    int N;
    scanf("%d",&N);
    long long price[N];
    for(int i=0;i<N;i++){
        scanf("%lld",&price[i]);
    }
    mergeSort(price, 0,N-1); 

    // for(int i=0;i<N;i++){
    //     printf("%lld ",price[i]);
    // }

   
    int flag=0,result=0;
    for (int i=N-1;i>=0;i--){
        if((price[i]-flag)<0){
            break;
        }
        else{
            result=(result+(price[i]-flag))%1000000007;
        }
        flag++;
    }
    
    printf("%d\n",result);
    flag=0;
    result=0;

    
}

return  0;
}
