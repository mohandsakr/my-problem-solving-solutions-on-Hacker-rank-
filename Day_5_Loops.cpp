//============================================================================
//prblem link :https://www.hackerrank.com/challenges/30-loops
// Name        : Day_5_Loops.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================

#include <iostream>
using namespace std;

using namespace std;
int n;

int main(){

    cin >> n;
    int result [11];
    for(int i=1;i<=10;i++){
        result[i]=i*n;
    }
    for(int i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" "<<"= "<<result[i]<<endl;
    }
    return 0;
}
