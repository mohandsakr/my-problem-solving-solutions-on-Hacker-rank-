//============================================================================
//problem link : https://www.hackerrank.com/contests/w30/challenges/find-the-minimum-number
// Name        : Find_the_Minimum_Number.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================

#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str1="min(int, ";
    string str2="int";
    for(int i=1;i<n;i++){
        cout<<str1;
    }
    cout<<str2;
    for(int i=1;i<n;i++){
        cout<<")";
    }

    return 0;
}
