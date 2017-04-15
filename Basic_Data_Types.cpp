//============================================================================
//problem link  : https://www.hackerrank.com/challenges/c-tutorial-basic-data-types
// Name        : Basic_Data_Types.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted.
//============================================================================
#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    long long c;
    char d;
    float e;
    double f;
    cin>>a>>b>>c>>d>>e>>f;
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<c<<"\n";
    cout<<d<<"\n";
    cout<<fixed<<setprecision(3)<<e<<"\n";
    cout<<fixed<<setprecision(9)<<f<<"\n";
    return 0;
}

