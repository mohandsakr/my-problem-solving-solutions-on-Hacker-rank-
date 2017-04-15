//============================================================================
//problem link: https://www.hackerrank.com/challenges/diagonal-difference
// Name        : Diagonal_Difference.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;

    int sumd1=0;
    int sumd2=0;
    cin >> n;
    int k;
    int arr [n][n];
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    k=n-1;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                sumd1+=arr[i][j];
                }
        sumd2+=arr[i][k];
        k--;
        }



    int difference=0;
    difference=sumd1-sumd2;
    cout<<abs(difference);




    return 0;
}
