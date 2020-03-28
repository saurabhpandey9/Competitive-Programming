#include<iostream>
#include<list>
using namespace std;

bool check_prime(int n){
    if(n==1){
        return false;
    }
    else if(n==2){
        return true;
    }
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}



bool prime_number(bool *p,int number){

    p[0]=false;
    p[1]=false;

    for(int i=2;i*i<=number;i++){
        if(check_prime(i)){
            for (int j=i*i;j<=number;j+=i){
                p[j]=false;
                
            }
        
        }
    }

}


int main(){

    int number=100000;
    bool p[number+1];
    // initialization of all number from 0 to numbere as prime i.e true (initial assumption)
    for(int i=0;i<=number;i++){
        p[i]=true;
    }
    prime_number(p,number);

    list<int> plist;

    for(int i=0;i<=number;i++){
        if(p[i]){
          plist.push_back(i);  
        }
        
    }

    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    list<int> factors;

    auto it=plist.begin();
    while(n!=1){
        if(n%(*it)==0){
            n=n/(*it);
            factors.push_back((*it));
        }
        else{
            it++;
        }
    }
    cout<<endl;

    for(auto x:factors){
        cout<<x<<" ";
    }



    return 0;
}