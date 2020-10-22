#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"Enter the size of array : ";
	cin>>n;
	int a[n];
	int s=0,e=n-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<" Original Array : ";
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	while(s!=e){
		swap(a[s],a[e]);
		s++;
		e--;
	}
	cout<<endl<<" Reversed Array : ";
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
