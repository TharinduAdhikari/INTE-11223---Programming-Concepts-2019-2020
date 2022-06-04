#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int num;
	int max;
	int min;
	int count =1;
	
	
	cout<<"Input N value : " << endl;
	cin>>n;
	
	while(count<=n){
		cout<<"Enter Number : "<<endl;
		cin>>num;
		
		if(count==1){
			max=num;
			min=num;
		}
		
		else{
			if (num>=max){
			max= num;
						}
			if (num<=min){
			min= num;
						}
				}
		count++;
		}
	
	cout<<"Maximum value is = " <<max<<endl;
	cout<<"Minimum value is = " <<min;
	
	return 0;
}
