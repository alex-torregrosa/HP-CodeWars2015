#include <iostream>
#include <string>

using namespace std;

int main(){
	int n = 0;
	string name = "";
	cin>>n;
	cin>>name;
	if(n>2){
		cout<<name<<" is "<<2*10+(n-2)*4<<" human years old"<<endl;
	}
	else{
		cout<<name<<" is "<<n*10<<" human years old"<<endl;
	}
	
}
