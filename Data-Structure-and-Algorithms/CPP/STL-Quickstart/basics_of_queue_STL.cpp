//auther @Saurabh Pandey
// basics of queue STL class
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q; //declaration

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin.get();
        cin>>x;
        q.push(x);
    }

    while(!q.empty()){
        cout<<q.front()<<" ";  // printing the first entered element 
        q.pop();  // first element to be poped
    }


    return 0;
}