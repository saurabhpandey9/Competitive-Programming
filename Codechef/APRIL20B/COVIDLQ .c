#include<stdio.h>
int main()
{
int testcase;
scanf("%d",&testcase);

for(int x=0;x<testcase;x++){
    int N;
    scanf("%d",&N);
    int array[N];
    for(int i=0;i<N;i++){
        scanf("%d",&array[i]);
    }

    int f=0;
    int i=0;
    for(;i<N;){
        if (f){
            break;
        }
        else if(array[i]==1){
            int j=5;
            i=i+1;
            while(j>0){
                if(array[i]==1){
                    f=1;
                    printf("NO\n");
                    break;
                }
                else{
                    j=j-1;
                    i=i+1;
                }
            }
        }
        else{
            i=i+1;
        }
    }
  if(f==0){
      printf("YES\n");
  }  
}

return  0;
}

