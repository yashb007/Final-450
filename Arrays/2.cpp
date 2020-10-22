#include<iostream>
using namespace std;

int findMax(int a[], int n){
	int max = a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	return max;
}

int findMin(int a[], int n){
	int min = a[0];
	for(int i=1;i<n;i++){
		if(a[i]<min){
			min = a[i];
		}
	}
	return min;
}

int main(){
	int n,i;
	cout<<"Enter the size of array : ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Maximum element is : "<<findMax(a,n)<<endl;
	cout<<"Minimum element is : "<<findMin(a,n)<<endl;
}
