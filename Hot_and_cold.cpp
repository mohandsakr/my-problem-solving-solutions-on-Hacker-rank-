//============================================================================
//problem link:https://www.hackerrank.com/contests/hourrank-20/challenges/hot-and-cold
// Name        : Hot_and_cold.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status: accepted
//============================================================================
 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int c1,c2,h1,h2;
    cin>>c1>>c2>>h1>>h2;
    int maxc=max(c1,c2);
    int minh=min(h1,h2);
    if(maxc<=minh){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}
