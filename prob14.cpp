#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	string s= "";
	while(cin>>s){
	int res = 0;
	vector<int> real(s.length());
	if(s==".") break;
	for(int i = 0; i < s.length(); ++i){
		if(s[i]=='I') real[i] = 1;
		if(s[i]=='V') real[i] = 5;
		if(s[i]=='X') real[i] = 10;
		if(s[i]=='L') real[i] = 50;
		if(s[i]=='C') real[i] = 100;
		if(s[i]=='D') real[i] = 500;
		if(s[i]=='M') real[i] = 1000;
	}
	for(int i = 0; i < real.size(); ++i){
		if(real[i+1] > real[i] and i != real.size()-1){
			//cout<<"caca is "<<real[i]<<"and i is "<<i<<endl;
			continue;
			
		} 
		else if(real[i-1] < real[i]){
			res += real[i] - real[i-1];
		}
		else res += real[i];
	}
	cout<<res<<endl;
}}
