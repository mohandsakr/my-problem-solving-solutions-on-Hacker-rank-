//============================================================================
//problem link : https://www.hackerrank.com/challenges/sansa-and-xor
// Name        : SansaandXOR.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted .
//============================================================================
#include <iostream>
using namespace std;
int xoring(int arr[],int n)
{
    int result=0;
    if(n%2==0)
        return 0;
    else {
    for(int i=0 ; i<n ;i+=2){
        result^=arr[i];
    }
        return result;
    }
}

int main() {
int t;
int n;
    cin>>t;

    for(int i=0;i<t;i++){
         cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
      cout<<  xoring(arr,n)<<endl;

    }

    return 0;
}
