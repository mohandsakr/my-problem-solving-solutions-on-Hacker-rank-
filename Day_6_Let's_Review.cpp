//============================================================================
//problem link :https://www.hackerrank.com/challenges/30-review-loop
// Name        : Day_6_Let's_Review.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================

#include <iostream>
using namespace std;


int main() {
    string s;
    string even,odd;
    int testcases;
    cin>>testcases;
    for(int j=0;j<testcases;j++){
    cin>>s;
    for(int i=0;i<s.size();i++){
            if(i%2==0){
            even+=s[i] ;
            }
            else{
                odd+=s[i];
            }

    }
    cout<<even<<" "<<odd<<endl;
    even="";
    odd="";
    }
    return 0;
}
