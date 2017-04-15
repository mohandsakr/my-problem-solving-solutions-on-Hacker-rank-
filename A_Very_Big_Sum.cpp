//============================================================================
//problem link : https://www.hackerrank.com/challenges/a-very-big-sum
// Name        : A_Very_Big_Sum.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================

#include <iostream>
#include<vector>
using namespace std;


int main(){
    int n;
   long long  sum = 0;
    cin >> n;
    vector<long long> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        //cout<<arr[arr_i]<<" ";
    }
    for(int i=0;i<n;i++){
        //cout<<endl<<arr[i]<<" ";

       sum=sum +arr[i];
    }
    //cout<<"sum"<<sum;
    cout<<sum<<endl;
    return 0;
}
