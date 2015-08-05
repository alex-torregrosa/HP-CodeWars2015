#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isLeap(int year){
	if(year%4==0 and !(year%100==0 and year%400 != 0)) return 1;
	return 0;
}

int main(){
	vector<int> diasMes(12);
	diasMes[0] = 31;
	diasMes[1] = 28;
	diasMes[2] = 31;
	diasMes[3] = 30;
	diasMes[4] = 31;
	diasMes[5] = 30;
	diasMes[6] = 31;
	diasMes[7] = 31;
	diasMes[8] = 30;
	diasMes[9] = 31;
	diasMes[10] = 30;
	diasMes[11] = 31;
	int n = 0;
	cin>>n;
	for(int popo = 0; popo < n; ++popo){
		int totalDays = 0;
		string name = "";
		cin>>name;
		string number = "";
		cin>>number;
		int d1, m1, a1;
		char c;
		cin>>d1>>c>>m1>>c>>a1;
		int d2, m2, a2;
		cin>>d2>>c>>m2>>c>>a2;
		if(a1 != a2) {
		
		//diasmes
		if(m1==2){
			if(isLeap(a1)) totalDays += 29-d1;
			else totalDays += 28-d1;
		} 
		else totalDays += diasMes[m1-1]-d1;
		
		
		//mese
		for(int i = m1; i < 12; ++i){
			if(i!=1)totalDays += diasMes[i];
			else{
				if(isLeap(a1)) totalDays += diasMes[i] +1;
				else totalDays += diasMes[i];
			}
		}
		
		//ano's
		
		for(int i = a1+1; i < a2; ++i){
			if(isLeap(i)) totalDays += 366;
			else totalDays += 365;
		}
		
		//mese2
		for(int i = 0; i < m2-1; ++i){
			if(i!=1)totalDays += diasMes[i];
			else{
				if(isLeap(a2)) totalDays += diasMes[i] +1;
				else totalDays += diasMes[i];
			}
		}
		
		//dias2
		totalDays +=d2;
		}
		else{
				//diasmes
		if(m1==2){
			if(isLeap(a1)) totalDays += 29-d1;
			else totalDays += 28-d1;
		} 
		else totalDays += diasMes[m1-1]-d1;
				//mese2
		for(int i = m1; i < m2-1; ++i){
			if(i!=1)totalDays += diasMes[i];
			else{
				if(isLeap(a2)) totalDays += diasMes[i] +1;
				else totalDays += diasMes[i];
			}
		}
		
		cout<<totalDays;
		//dias2
		totalDays += d2;
		}
		cout<<name<<" "<<number<<" ruled for "<<totalDays<<" days"<<endl;
}
}
