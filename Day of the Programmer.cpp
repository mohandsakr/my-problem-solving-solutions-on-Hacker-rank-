/*
problem link:https://www.hackerrank.com/challenges/day-of-the-programmer/problem
status:accepted
author :mohand sakr
problem name:Day of the Programmer



*/
#include <bits/stdc++.h>

using namespace std;

 

int main()
{
    int day=0;
    int n;
    cin>>n;
    if(n>=1919){
    if((((n%4==0)&&(n%100))||(n%400==0))){
day=12;
    }
    else {
        day=13;
    }}
    else if(n==1918) day=26;
    else {
        if(n%4==0){
            day=12;
        }
        else {
            day=13;
        }



    }
    

    cout<<day<<"."<<"09."<<n<<endl;

    return 0;
}

 
