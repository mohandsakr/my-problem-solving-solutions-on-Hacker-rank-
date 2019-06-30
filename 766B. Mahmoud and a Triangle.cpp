/*
problem link:http://codeforces.com/contest/766/problem/B
problem name:B. Mahmoud and a Triangle
status:accepted
author:moahnd sakr


*/


#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	bool can=0;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<=n-3;i++){
		int one=arr[i]+arr[i+1];
		int two=arr[i]+arr[i+2];
		int three=arr[i+1]+arr[i+2];
		if(one>arr[i+2]&&two>arr[i+1]&&three>arr[i])
		{
			can=1;
	}
}
	if(can){
		cout<<"YES\n";
	} else {
		cout<<"NO\n";
		
	}
 	return 0;
}
