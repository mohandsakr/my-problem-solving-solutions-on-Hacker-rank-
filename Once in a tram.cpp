//============================================================================
//problem link:https://www.hackerrank.com/contests/w34/challenges/once-in-a-tram
// Name        : Once.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool islucky(int n){
    int sum=0;
    int sum2=0;
    for(int i=0;i<6;i++){
        if(i<3){
            sum+=n%10;
            n=n/10;
        }
        else if(i>2){
            sum2+=n%10;
           n= n/10;
        }
    }
    if(sum==sum2)return 1;
    else
        return 0;
}

int main() {
int n;
    cin>>n;
    ++n;
    while(!islucky(n)){
        ++n;
    }
    cout<<n;

    return 0;
}
