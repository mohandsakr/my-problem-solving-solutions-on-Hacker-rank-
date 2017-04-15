//============================================================================
//problem link :https://www.hackerrank.com/contests/101hack47/challenges/permutation-possibility
// Name        : Permutation_Possibility.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted .
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int m;
    cin>>m;
    int counter=0;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
       }
    sort(arr,arr+m);
    for(int i=0;i<m;i++){
        if(arr[i]==arr[i+1])
            counter++;
    }

    if(counter >0)
         cout<<"NO";
    else
       cout<<"YES";
    return 0;
}
