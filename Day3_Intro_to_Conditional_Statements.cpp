//============================================================================
//problem link: https://www.hackerrank.com/challenges/30-conditional-statements/submissions/code/26554637
// Name        : Day3_Intro_to_Conditional_Statements.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// status : accepted.
//============================================================================

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%2!=0){
        cout<<"Weird"<<endl;
    }
    else{
        if(n>=2&&n<=5){
            if(n%2==0){
                cout<<"Not Weird"<<endl;
            }
            }
        if(n>=6&&n<=20){
            if(n%2==0){
                cout<<"Weird"<<endl;
            }
        }
        if(n>20&&n%2==0)
            {
         cout<<"Not Weird"<<endl;
        }

    }

    return 0;
}

