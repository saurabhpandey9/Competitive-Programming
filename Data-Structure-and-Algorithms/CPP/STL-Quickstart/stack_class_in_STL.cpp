#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int> s;
    
    int n;
    cin>>n;

    // In this code we will see four properties of stack ie. push() pop() top() empty()

    for(int i=0;i<=n;i++){
            int no;
            cin>>no;
            s.push(no);
    }
    


    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}