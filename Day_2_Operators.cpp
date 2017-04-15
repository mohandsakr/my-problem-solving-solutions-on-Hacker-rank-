//============================================================================
//problem link :https://www.hackerrank.com/challenges/30-operators
// Name        : Day_2_Operators.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted.
//============================================================================

 #include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   double cost;
    double x;
    double y;
    double result=0;
    int result2;
    cin>>cost>>x>>y;
    x=(x/100)*cost;
    y=(y/100)*cost;
    result=cost+x+y;
    cout<<"The total meal cost is "<<round(result)<<" dollars."<<endl;


    return 0;
}

