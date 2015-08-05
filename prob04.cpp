#include <iostream>
#include <string>

using namespace std;

bool isprimal(int n){
	for(int i = 2; i < n; ++i){
		if(n % i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n = 0;
	while(cin>>n){
		if(n==0) break;
		if(isprimal(n)){
			cout<<n<<" is prime"<<endl;
		}
		else cout<<n<<" is not prime"<<endl;
	}
}
