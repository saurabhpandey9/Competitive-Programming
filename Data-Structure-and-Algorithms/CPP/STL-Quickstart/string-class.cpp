#include<iostream>
#include<string>
using namespace std;
int main(){
    string s0;
    s0+="Apple";
    cout<<s0<<endl;

    string s1=s0;                                                  //copy constructure
    cout<<s1.length()<<endl;                                     //lenght() of string
    cout<<s1.append(" is good for health")<<endl;               //append somthing in string

    //clear() function to erase everything from string variable
    s1.clear();  // it  can't be directly used in cout << do remember
    cout << s1.length()<<endl; 

    s1.append("Apple is good for health");
    
    cout<< (s0.compare(s1)) <<endl;  //this is lexographical comparison
    string s4="Mango",s3="Apple";
    cout <<s3.compare(s4)<<endl;
    
    
    // find the index of substring 
    
    string s5="Apple is good for health";
    string s6="good";
    int len=s6.length();
    int index=s5.find(s6);
    cout<<index<<endl;
    s5.erase(index,len); //erase(starting index, lenght of string to be erased)
    cout<<s5<<endl;
    
    //iterate over character
    cout<<s5[0]<<endl;
    
    for( int i ;i<s5.length();i++){
    	cout<<s5[i]<<" ";
	}
	
	for (string::iterator it=s5.begin();it<s5.end();it++){  //string::iterator should be remember to use it
		cout<<(*it)<<" ";
	}
    
    

return 0;

}
