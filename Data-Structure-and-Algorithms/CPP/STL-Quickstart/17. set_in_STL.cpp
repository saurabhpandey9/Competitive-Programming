// Author @ Saurabh Pandey
// set is unique collection of element 
// and ordered it can be BST/ red_black tree
#include<iostream>
#include<set>
using namespace std;
int main(){

    set<int> s;

    int n;
    cin>>n;

    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    cout<<endl;

    int y;
    cin>>y;

    s.erase(y);  // set cant be update you can delete and add new 

    for (auto x:s){
        cout<<x<<endl;
    }

    return 0;
}