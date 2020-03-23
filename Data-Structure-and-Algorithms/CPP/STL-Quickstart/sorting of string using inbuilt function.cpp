#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.get();
	string s[n];
	for (int i=0;i<n;i++){
		getline(cin,s[i]); // how to take input in string forom a line
	}
	
	sort(s,s+n); // sort(start,end) it can sort and array or vector
	
	
	for (int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
	
	
	return 0;
}
