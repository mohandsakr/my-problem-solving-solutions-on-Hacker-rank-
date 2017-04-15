//============================================================================
//problem link :https://www.hackerrank.com/contests/w30/challenges/candy-replenishing-robot
// Name        : Candy_Replenishing_Robot.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================
#include<iostream>
 using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    int remain=n;
    int added=0;
   int arr[t];
   for(int i=0;i<t;i++){
       cin>>arr[i];
   }
   for(int i=0;i<t;i++){
       if(remain>=arr[i])
       {
           remain=remain-arr[i];

       }
       else if(remain<arr[i]){

           int val=n-remain;

           remain+=val;
           added+=val;
           remain=remain-arr[i];
       }
   }
     cout<<added;
    return 0;
}
