//============================================================================
//problem link:https://www.hackerrank.com/challenges/drawing-book/problem
// Name        : Drawing.cpp
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
   int n,p;
    cin>>n>>p;
    if(n%2==1){
        cout<<min(((n-p)/2),p>>1);
    }
    else{
        cout<<min(((n-p+1)/2),p>>1);
    }

    return 0;
}
