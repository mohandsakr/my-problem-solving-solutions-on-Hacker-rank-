//============================================================================
//problem link : https://www.hackerrank.com/challenges/compare-the-triplets
// Name        : Compare_the_Triplets.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accept
//============================================================================


#include <cmath>
#include <iostream>
using namespace std;


int main(){
    int a0;
    int a1;
    int a2;
    int sum1=0, sum2=0;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    if(a0!=b0){
        if(a0>b0){
            sum1+=1;
        }
        else{
            sum2+=1;
        }
    }
    if(a1!=b1){
        if(a1>b1){
            sum1+=1;
        }
        else{
            sum2+=1;
        }
    }
    if(a2!=b2){
        if(a2>b2){
            sum1+=1;
        }
        else{
            sum2+=1;
        }
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}

