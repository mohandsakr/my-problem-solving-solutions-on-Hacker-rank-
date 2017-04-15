//============================================================================
//problem link : https://www.hackerrank.com/challenges/time-conversion
// Name        : Time_Conversion.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char arr[10];
    cin>>arr;
    int x=0;
    int y1=0;
    int y2=0;
    int s;
    if(arr[8]=='P'){
        if(arr[0]=='0'){
            x=arr[1]-'0';
            x+=12;
            cout<<x;
            for(int i=2;i<8;i++)
            	cout<<arr[i];
        }
        else{
            if(arr[1]=='2'){
                for(int i=0;i<8;i++)
            	cout<<arr[i];
            }
             else{
        	y1=arr[0]-'0';
        	y1*=10;
        	y2=arr[1]-'0';
        	s=y1+y2+12;
        	cout<<s;
        	for(int i=2;i<8;i++)
                cout<<arr[i];}
        }


    }
        else{
        	if(arr[1]=='2'){
        		cout<<"00";
        		for(int i=2;i<8;i++)
        			cout<<arr[i];
        	}
        	else{
            for(int i=0;i<8;i++)
                cout<<arr[i];}


    }
    return 0;
        }


