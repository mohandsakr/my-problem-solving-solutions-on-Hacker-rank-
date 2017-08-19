//============================================================================
//problem link:https://www.hackerrank.com/challenges/counting-valleys?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign
// Name        : Counting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================

 #include <iostream>
 #include <string>
using namespace std;
int main() {
    int n,value=0;
    cin>>n;
    string s;
    cin>>s;
     int level=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            ++level;
            if(level==0){
            ++value;
        }
        }
        else if(s[i]=='D')
            --level;

    }
    cout<<value<<'\n';

    return 0;
}

