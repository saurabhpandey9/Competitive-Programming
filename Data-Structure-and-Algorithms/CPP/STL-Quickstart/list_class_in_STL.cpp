//author @Saurabh Pandey

#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l1;
    list<string> l2{"cat","apple","dog","pinnaple"};

    // traversing of list
    for(auto x:l2){
        cout<<x<<" ->";
    }
    cout<<endl;

    //various function under list header


    cout<<"Various function under header list"<<endl;

    l2.push_back("Pandey");

    for(auto x:l2){
        cout<<x<<" ->";
    }
    cout<<endl;

    l2.pop_back();

    for(auto x:l2){
        cout<<x<<" ->";
    }
    cout<<endl;

    //push back & front

    l2.push_back("pandey");
    l2.push_front("Saurabh");

    for(auto x:l2){
        cout<<x<<" ->";
    }
    cout<<endl;


    // remove
    l2.pop_back();
    l2.pop_front();

    for(auto x:l2){
        cout<<x<<" ->";
    }
    cout<<endl;


    cout<<endl;
    // sort() & remove()
    l2.sort();
    l2.reverse();

    for(auto x:l2){
        cout<<x<<" ->";
    }
    cout<<endl;



    //insert()

    auto it=l2.begin();
    it++;
    it++;

    l2.insert(it,"Pandey");  // here it is pointer address so you can't use it+3 it will give error because of pointer address

    for(auto x:l2){
        cout<<x<<" ->";
    }
    cout<<endl;


    //erase(index in ponter formate)  and remove() functions

    l2.erase(--it);  // here pandey should be removed
    l2.remove("cat"); // it will remove cat

    for(auto x:l2){
        cout<<x<<" ->";
    }
    cout<<endl;

    return 0;


}