//============================================================================
//problem link:https://www.hackerrank.com/challenges/birthday-cake-candles
// Name        : Birthday.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<count(arr,arr+n,arr[n-1])<<"\n";
    return 0;

}
