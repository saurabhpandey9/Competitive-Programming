//author@Saurabh Pandey 

#include<iostream>
#include<queue>
using namespace std;
int main(){

    priority_queue<int> pq_max; //this decelaration of queue will give max heap

    priority_queue<int ,vector<int>,greater<int>> pq_min; //decelaration of min heap


    // use of push() pop() empty() and top() functions
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pq_max.push(x);
        pq_min.push(x);
    }

    while(!pq_max.empty()){
        cout<<pq_max.top()<<" ";
        pq_max.pop();
    }
    cout<<"min heap"<<endl;

    while(!pq_min.empty()){
        cout<<pq_min.top()<<" ";
        pq_min.pop();
    }



    return 0;
}