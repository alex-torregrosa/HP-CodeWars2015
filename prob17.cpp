#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int n = 0;
	cin>>n;
	vector<double> valores(n);
	vector<string> nombre(n);
	for(int i = 0; i < n; ++i){
		cin>>valores[i];
		cin>>nombre[i];
	}
	double num = 0;
	string s = "";
	while(cin>>num){
		double initial = num;
		string init = "";
		cin>>init;
		cin>>s;
		string final = "";
		cin>>final;
		if(init != "EUR"){
			int pos = 0;
			for(int i = 0; i < n; ++i){
				if(nombre[i]==init){
					pos = i;
					break;
				} 
			}
			num = num/valores[pos];
		}
		if(final!= "EUR"){
			int pos = 0;
			for(int i = 0; i < n; ++i){
				if(nombre[i]==final){
					pos = i;
					break;
				} 
			}
			num = num * valores[pos];
		}
		cout<<initial<<" "<<init<<" = "<<num<<" "<<final<<endl;
	}
}
