//Author @ Saurabh Pandey
//This question is related to priority queue and also tell about the use of class;
#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(){}
    Person(string n,int a){
        name=n;
        age=a;
    }
};

class PersonCompare{
    public:
    bool operator()(Person A,Person B){ // here bool operator shold be written
        return A.age < B.age;
    }
};
int main(){

    priority_queue<Person,vector<Person>,PersonCompare> pq;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string name;
        int age;
        cin>>name>>age;

        Person p=Person(name,age);
        pq.push(p);
    }

    cout<<"No of person name print on the basis of age in decending order"<<endl;

    cin>>n;

    for(int i=0;i<n;i++){
        Person p=pq.top();
        cout<<p.name<<" "<<p.age<<endl;
        pq.pop();
    }
    

    


    return 0;
}
