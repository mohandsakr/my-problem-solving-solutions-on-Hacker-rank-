/*
problem name:Big Sorting;
problem link:https://www.hackerrank.com/challenges/big-sorting/problem;
status:acepted;
author :mohand sakr;


*/
#include <bits/stdc++.h>

using namespace std;

bool cmp(string s,string s2){
if(s.length()!=s2.length())
{
	return s.length()<s2.length();
}
return s<s2;
	
}
int main() {

int n;
cin>>n;
vector<string> vect;
for(int i=0;i<n;i++)
{
	string s;
	cin>>s;
	vect.push_back(s);
}

sort(vect.begin(),vect.end(),cmp);
for(int i=0;i<n;i++){
	cout<<vect[i]<<endl;
}


	return 0;
}
