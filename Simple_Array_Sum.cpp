//============================================================================
//problem link : https://www.hackerrank.com/challenges/simple-array-sum
// Name        : Simple_Array_Sum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int sum=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
