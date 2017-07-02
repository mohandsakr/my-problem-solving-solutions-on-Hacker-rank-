//============================================================================
//problem link:https://www.hackerrank.com/contests/hourrank-22/challenges/mancunian-and-parity-game/problem
// Name        : Parity_Game.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style.
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
    long long  counter=0;
    //t cont=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        counter+=x;
    }

    if(counter%2==0)
        {
            cout<<"0";
        }
        else{
            if(n==1)
                cout<<"-1";
            else
            cout<<"1";
        }


    return 0;
}
