#include <iostream>
#include <string>

using namespace std;

int main(){
	string s = "";
	while(cin>>s){
	if(s==".") break;
	string s2 = "";
	for(int i = s.length()-1; i>= 0; --i){
			if(s[i]=='G')s2 += 'C';
			if(s[i]=='C')s2 += 'G';
			if(s[i]=='A')s2 += 'T';
			if(s[i]=='T')s2 += 'A';	
		}
	cout<<s2<<endl;
	}
}
