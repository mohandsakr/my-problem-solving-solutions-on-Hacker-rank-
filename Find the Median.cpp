/*
problem link:
prolem name:Find the Median
status:accepted
author:mohand sakr


*/

#include <bits/stdc++.h>

using namespace std;


int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){

    cin>>arr[i];
}
sort(arr,arr+n);

cout<<arr[n>>1]<<endl;


    return 0;
}
