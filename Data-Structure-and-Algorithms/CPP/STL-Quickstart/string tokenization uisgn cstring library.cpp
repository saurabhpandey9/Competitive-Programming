#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	char s[100]="This is a good food"; //this should be remember that its a character as in c
	
	
	char *ptr=strtok(s," ");
	cout<<ptr<<endl;
	while(ptr!=NULL){
		ptr=strtok(NULL," "); // IN place of " " we can use , . or any thing you want to seperate
		cout<<ptr<<endl;
	}
	
	return 0;
}
