#include<iostream>
#include<list>
using namespace std;
int main()
{
int n;
cin>>n;

for(int x=0;x<n;x++){
    int N;
    cin>>N;
    list<long long> price;
    for(int i=0;i<N;i++){
        int z;
        cin>>z;
        price.push_back(z);
    }
    price.sort();
    price.reverse();

    int flag=0,result=0;
    for (auto x:price){
        if((x-flag)<0){
            break;
        }
        else{
            result=(result+(x-flag))%1000000007;
        }
        flag++;
    }
    
    cout<<(result)<<endl;
    flag=0;
    result=0;

    
}

return  0;
}

