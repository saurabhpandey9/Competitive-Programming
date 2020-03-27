#include<iostream>
#include<string>
#include<map>  // header file for both map and multimap is same
using namespace std;

int main(){
    multimap<char,string> mp;

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     char c;
    //     string str;
    //     cin>>c>>str;
    //     mp.insert(make_pair(c,str));
    // }

    mp.insert(make_pair('A',"Saurabh"));
    mp.insert(make_pair('A',"Pandey"));
    mp.insert(make_pair('B',"Hello"));
    mp.insert(make_pair('C',"Hola"));




    // find and erase () 
    auto it=mp.find('A'); // find(key)

    mp.erase(it);
    mp.erase('A'); // We can also delete using this method both works same;


    // to delete or print somthing in range
    auto it1=mp.lower_bound('A');
    auto it2=mp.upper_bound('A');
    

    // iteration 

    for (auto x:mp){
        cout<<x.first<<"->"<<x.second<<endl;
    }

    return 0;
}