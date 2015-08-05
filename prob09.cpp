#include <iostream>
#include <string>

using namespace std;

int main(){
	double inicial = 0;
	cin>>inicial;
	double quita= 0;
	while(cin>>quita){
		int quitar = quita;
		if(quitar==0) break;
		if(quitar % 5 == 0){
			if(quitar < inicial){
				inicial -= quitar;
				inicial -= 0.5;
			}
		}
		cout<<quitar<<" "<<inicial;
		cout<<endl;
		
	}
}
