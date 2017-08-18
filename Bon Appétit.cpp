//============================================================================
//problem link:https://www.hackerrank.com/challenges/bon-appetit?h_r=next-challenge&h_v=zen
// Name        : Bon.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>

using namespace std;


int main() {
   int n,k;
    long long paid,total=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i!=k){
            total+=x;
        }
    }
    total=total>>1;
    cin>>paid;
    if(paid==total){
        cout<<"Bon Appetit\n";
    }
    else{
        cout<<paid-total;
    }


    return 0;
}

