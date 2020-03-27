//Author @ Saurabh Pandey
//basics of unordered_map it is also called 

#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;

int main (){
    //decleration 
    unordered_map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string key;
        int value;
        cin>>key>>value;
        m.insert(make_pair(key,value));
    }

    //or // another way to insert data in unordered_map 
    pair<string,int> p;
    p.first="Saurabh";
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

    //2. search   --------------------m.found(key)----------- will give address
    auto it=m.find("Saurabh");
    if(it!=m.end()){
        cout<<"Found "<<m["Saurabh"]<<endl;
        cout<<"Found "<<it->first<<endl;  // I hope you understand the point
    }


    //2. m.count() it will return 0 or 1 like boolean

    if(m.count("Saurabh")) {
        cout<<"Found "<<m["Saurabh"]<<endl;
    }


    // ---------------------------------------m.erase(key)-----------------------------------//

    m.erase("Saurabh");

    // ------how to manually add somthing in unordered_map------------------------//

    cout<<"After adding Pandey"<<endl;

    m["Pandey"]=45;

    for (auto it:m){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    // -----------Update previous value------------------//
    m["Pandey"]=100;

    cout<<"After update"<<endl;

    for (auto it:m){
        cout<<it.first<<"->"<<it.second<<endl;
    }




    return 0;
}