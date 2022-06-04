#include <iostream>
using namespace std;
int main()
{
int n,i,j;
int a,b;
int count=0;
int count1=0;
int temp;
cout<<"Input N Value = ";
cin>>n;
int arr[n];

while(count<n){
cout<< "Enter Number "<<count+1<<" :"<<endl;
cin>>arr[count];
count=count+1;
}

for(a=0;a<n;a++){
	
	for(b=0;b<n;b++){
		if(arr[b]>arr[b+1]){
		temp=arr[b];
		arr[b]=arr[b+1];
		arr[b+1]=temp;
		}
	}
}

while(count1<n){
cout<< "print "<<count1+1<<" : ";
cout<<arr[count1]<<endl;
count1=count1+1;
}

return 0;}



