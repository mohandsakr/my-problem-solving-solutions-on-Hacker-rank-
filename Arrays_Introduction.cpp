//============================================================================
//prolem link : https://www.hackerrank.com/challenges/arrays-introduction
// Name        : Arrays_Introduction.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//satus :accepted
//============================================================================
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int arr[10001];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=n-1;i>=0;i--)
        cout<<arr[i]<<" ";


    return 0;
}
