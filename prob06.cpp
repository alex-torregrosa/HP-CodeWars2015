#include <iostream>
#include <string>

using namespace std;

bool esVocal(char c){
	if(c=='a' or c == 'e' or c == 'i'  or c=='o' or c=='u' or c=='A' or c=='E' or c=='I' or c=='O' or c=='U' ) return 1;
	else return 0;
}

int main(){
	char c;
	double vocales = 0;
	double consos= 0;
	while(cin>>c){
		if(c=='#') break;
		if((c >= 'a' and c <= 'z')or(c >= 'A' and c <= 'Z')){
			if(esVocal(c)) vocales++;
			else consos++;
		}
	}
	double rat =vocales/consos;
	cout<<"Consonants: "<<consos<<endl;
	cout<<"Vowels: "<<vocales<<endl;
	cout<<"Ratio: "<<rat<<endl;
}
