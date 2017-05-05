//============================================================================
//problem link :https://www.hackerrank.com/contests/rookierank-3/challenges/find-the-bug
// Name        : Find_the_Bug.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//date : 5/5/2017
//status:accepted
//============================================================================
 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
    cin>>n;
    char arr[n][n];
    int bugr=0;
    int bugc=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        	char w;
        	cin>>w;
        	arr[i][j]=w;
            if(w!='O')
                {
                bugr=i;
                bugc=j;
            }
        }
    }
    cout<<bugr<<","<<bugc;
    return 0;
}
