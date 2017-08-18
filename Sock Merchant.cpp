//============================================================================
//problem link:https://www.hackerrank.com/challenges/sock-merchant/problem
// Name        : Sock Merchant.cpp
// Author      : Mohand Sakr.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include<map>
using namespace std;
int main() {
int n;
cin>>n;
int value=0;
map<int,int> ma;
map<int,int> ::iterator it;

 for(int i=0;i<n;i++){
	 int x;
	 cin>>x;
	 ++ma[x];
 }
 for(it=ma.begin();it!=ma.end();it++){
	 value+=((*it).second)/2;

 }
 cout<<value<<"\n";



	return 0;
}
