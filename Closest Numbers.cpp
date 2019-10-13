/*
problem link:https://www.hackerrank.com/challenges/closest-numbers/problem
probelm name:Closest Numbers
satus:accepted
author:mohand sakr



*/
#include <bits/stdc++.h>

using namespace std;

 
  
int main()
{

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

sort(arr,arr+n);
vector<int>pairs;
int curdiff=10000008;
for(int i=1;i<n;i++){
    int dif=abs(arr[i]-arr[i-1]);
    if(dif<curdiff){
        vector<int> vect;
        vect.push_back(arr[i]);
        vect.push_back(arr[i-1]);
        curdiff=dif;
pairs=vect;
    }
    else if(dif==curdiff){
        pairs.push_back(arr[i]);
        pairs.push_back(arr[i-1]);
    }
}
sort(pairs.begin(),pairs.end());
int len=pairs.size();
for(int i=0;i<len;i++){
    cout<<pairs[i]<<" ";
}






return 0;
}
