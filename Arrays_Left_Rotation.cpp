//============================================================================
//problem link : https://www.hackerrank.com/challenges/ctci-array-left-rotation
// Name        : Arrays_Left_Rotation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================
 #include <iostream>
using namespace std;
int main()
{
int n;
int k;
int i=0;
cin>>n>>k;
int arr1[n];
int arr2[n]={0};
for(int i=0;i<n;i++)//filing the array
{
	cin>>arr1[i];
	}
//rotation action


for(int j=n-k ;i<k;i++,j++)	{
	arr2[j]=arr1[i];
}

if(i!=n){


	for(int z=0;i<n;z++){
		arr2[z]=arr1[i];
		i++;
	}}
for(int a=0;a<n;a++)
	cout<<arr2[a]<<" ";
}
