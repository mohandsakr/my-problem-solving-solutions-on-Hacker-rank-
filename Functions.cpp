//============================================================================
//problem link: https://www.hackerrank.com/challenges/c-tutorial-functions
// Name        : Functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;


int maxi(int a,int b,int c,int d){
    int max=0;
    if(a>max)
        max=a;
    if(b>max)
        max=b;
        if(c>max)
        max=c;
        if(d>max)
        max=d;

        return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = maxi(a, b, c, d);
    printf("%d", ans);

    return 0;
}

