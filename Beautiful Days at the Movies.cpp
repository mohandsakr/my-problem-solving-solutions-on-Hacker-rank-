//============================================================================
//problem link:https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
// Name        : Beautiful.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================
 #include <cmath>
#include <iostream>
#include<string>
using namespace std;
bool isbutiful(int n,int k){
    string x=to_string(n);
    reverse(x.begin(),x.end());
   int a= stoi(x);
    if(abs(a-n)%k==0){
        return 1;
    }
    else
        return 0;
}

int main() {
    int i,j;
    long long k;
    int counter=0;
    cin>>i>>j>>k;
    for(int q=i;q<=j;q++){
     if(isbutiful(q,k)) ++counter;
    }
    cout<<counter;
    return 0;
}

