/*
problem link:https://www.hackerrank.com/challenges/missing-numbers/problem
probelm name:Missing Numbers
status: accepted
author:mohand sakr

*/

#include <bits/stdc++.h>

using namespace std;

 int arr[200009]={};
  int arr2[200009]={};

int main()
{
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
         int x;
         cin>>x;
         ++arr[x];

     }
     int m;
     cin>>m;
     for(int i=0;i<m;i++){
         int x;
         cin>>x;
         ++arr2[x];
     }
     for(int i=1;i<200001;i++)
     {
         if(arr[i]<arr2[i]){
             cout<<i<<" ";
         }


     }
     
 
 
    return 0;
}

 

