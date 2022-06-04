#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int num;
	float sum;
	float ave;
	int count =1;
	
	cout<<"Input N value : " << endl;
	cin>>n;
	
	while(count<=n){
		cout<<"Enter Number : "<<endl;
		cin>>num;
		
		if(num>10){
			sum=sum+num;
		}
		
		count++;
		}
	
	ave=sum/n;
	cout<<"AVERAGE IS :";
	cout<<fixed<<setprecision(3)<<ave<<endl;
	
	return 0;
}
