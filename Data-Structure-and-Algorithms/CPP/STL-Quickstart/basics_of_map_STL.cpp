//Author @ Saurabh Pandey
//basics of MAP class in STL its a self balancing BST ordered by key

#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main (){
    //decleration 
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string key;
        int value;
        cin>>key>>value;
        m.insert(make_pair(key,value));
    }

    //or // another way to insert data in map 
    pair<string,int> p;
    p.first="Saurbh";
    p.second=1;
    m.insert(p);

    // traversing the data 
    //1. traverse
    for (auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<"->"<<it->second<<endl;
    }
    cout<<endl;

    for (auto it:m){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    cout<<endl;




    return 0;
}