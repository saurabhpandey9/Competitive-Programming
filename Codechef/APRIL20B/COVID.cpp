#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

for(int x=0;x<n;x++){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    bool flag=false;
    int i=0;
    for(;i<N;){
        if (flag){
            break;
        }
        else if(arr[i]==1){
            // cout<<"falg1="<<i;
            int j=5;
            i=i+1;
            while(j>0){
                if(arr[i]==1){
                    flag=true;
                    // cout<<"no candition="<<i<<endl;
                    cout<<"NO"<<endl;
                    break;
                }
                else{
                    j=j-1;
                    i=i+1;
                    // cout<<"count2="<<i<<endl;
                }
            }
        }
        else{
            i=i+1;
        }

        // i=i+1;
        // cout<<"count="<<i<<endl;
    }


  if(flag==false){
      cout<<"YES"<<endl;
  }
    

    
}

return  0;
}

