#include <iostream>
#include <string>

using namespace std;

int main(){
	string s = "";
	while(cin>>s){
		if(s=="Palindrome!") break;
		string s2 = "";
		for(int i = s.length()-1; i>= 0; --i){
			s2 += s[i];
		}
		if(s==s2){
			cout<<"\""<<s<<"\""<<" is a palindrome"<<endl;
		}
		else{
			cout<<"\""<<s<<"\""<<" is not a palindrome"<<endl;
		}
	}	
}
