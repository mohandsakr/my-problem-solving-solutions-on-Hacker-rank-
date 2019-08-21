/*
problem name:The Hurdle Race
problem link:https://www.hackerrank.com/challenges/the-hurdle-race/problem
status:accepted
author :mohand 

*/
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
int maxi=arr[n-1];
if(k>maxi)
cout<< 0<<endl;
else {
    cout<<maxi-k;
}

    return 0;
}
