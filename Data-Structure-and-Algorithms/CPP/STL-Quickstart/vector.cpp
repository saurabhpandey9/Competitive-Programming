#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	//various method for declaration of vector
	vector<int> v0;
	vector<int> v1(5,0); // declation of 5 vector each with value of 0
	vector<int> v2(v1.begin(),v1.end());
	
//	vector<int> v3={1,2};
//	vector<int> v4{1,2}; //these both the decleration is true
	
	
	
	
	//iteration over vector
	
	for(int i;i< v1.size();i++){
		cout<<v1[i]<<",";
	}
	cout<<endl;
	
	
	for(vector<int>::iterator i=v1.begin();i<v1.end();i++){ // do remember to use this  method you must use vector<int>::iterator
		cout<<(*i)<<","; // this method will give the point as a address
	}
	cout<<endl;
	
//	for(int x:v1){ //this method does not work in C++<11 --version
//		cout<<x;
//	}


	
	
	
//	how to take input in vector

int n;
cin>>n;
cout<<n<<"Input";
vector<int> s1(1,0); // initialization of vector is necessary to use push_back() function
vector<int> s2(5,0);
int x;
for (int i=0;i<n;i++){
	cin>>x;
	s1.push_back(x);
}


// lets see at memory level what's the difference between s1 & s2

cout<<"difference at memory level"<<endl;

cout<<s1.size()<<endl;  //give the number of element in array
cout<<s1.capacity()<<endl; // size of underlying array
cout<<s1.max_size()<<endl; //maximum number of element an array can hold in worst case (it depends upon system)

cout<<"s2"<<endl;

cout<<s2.size()<<endl;
cout<<s2.capacity()<<endl;
cout<<s2.max_size()<<endl;
	
	
	return 0;
	
	}
