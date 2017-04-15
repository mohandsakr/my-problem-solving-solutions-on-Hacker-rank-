//============================================================================
//problem link:https://www.hackerrank.com/contests/rookierank-2/challenges/migratory-birds
// Name        : Migratory_Birds.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================
 #include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count[5]={0};

	for(int i=0;i<n;i++){
		if(arr[i]==1){
			count[0]++;
		}
		if(arr[i]==2){
			count[1]++;
				}
		if(arr[i]==3){
			count[2]++;
				}
		if(arr[i]==4){
			count[3]++;
				}

		if(arr[i]==5){
			count[4]++;
				}
	}
	int maxindex=0;
	for(int i=1;i<5;i++){
		if(count[i]>count[maxindex])
			maxindex=i;
		else if(count[i]==count[maxindex]){
			if(i<maxindex){
				maxindex=i;
			}
		}
	}
	int value=maxindex+1;
	cout<<value;

	return 0;
}
