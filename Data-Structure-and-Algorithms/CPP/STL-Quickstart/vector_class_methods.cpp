#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> s{1,2,3,4};
    cout<<s.size()<<endl;

    s.push_back(5); //it will add 5 at the end of vector
    s.pop_back(); // this will remove last element of vector
    
    // Insert element at the required postion , and postion should be a pointter address
    s.insert(s.begin()+2,3,100);  // vactorvariable.insert(pointer address,freq, number to be added)

    //erase some element 
    for (int x:s){
        cout<<x<<" ";
    }
    cout<<endl;

    s.erase(s.begin()+1) ;
    cout<<"erased element at  position 1"<<endl;
    for (int x:s){
        cout<<x<<" ";
    }
    cout<<endl;

    s.erase(s.begin()+1,s.begin()+4); // to erase element in range
    for (int x:s){
        cout<<x<<" ";
    }



    // some more functions related to vector
    cout<<"Some more functons related to vector"<<endl;
    cout<<s.size()<<endl; // give the number of element present in vector
    cout<<s.capacity()<<endl; // underlying capacity of vector
    cout<<s.max_size()<<endl; // worst condition max of vector


    // reserve function to avoid doubling of and array at certain level

    cout<<"reserve in vector"<<endl;
    int nn;
    cin>>nn;
    vector<int> v;
    v.reserve(1000);
    for(int i=0;i<nn;i++){
        int no;
        cin>>no;
        v.push_back(no);

    }

    for(int x:v){
        cout<<x<<" ";
    }

    return 0;
}