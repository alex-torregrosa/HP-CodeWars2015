#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector<int> valls(256);
	for(int i = 0; i < valls.size(); ++i){
		valls[i]=0;
	}
	int w, h;
	cin>>w>>h;
	int total = w*h;
	int n;
	for(int i = 0; i < total; ++i){
		cin>>n;
		valls[n] += 1;
	}
	for(int i = 0; i < 16; ++i){
		for(int moreno = 16*i; moreno < (16*i)+16; ++moreno){
			cout<<valls[moreno];
			if(moreno != (16*i)+15){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
}
