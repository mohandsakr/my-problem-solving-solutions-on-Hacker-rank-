/*
problem link:https://www.hackerrank.com/challenges/the-birthday-bar/problem
problem name: Birthday Chocolate
author :Moahnd sakr
satus :accepted .



*/

#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;
int arr[n+5]={};
int arr2[n+5]{};
for(int i=1;i<=n;i++)
{
    cin>>arr[i];
}

arr2[1]=arr[1];
for(int i=2;i<=n;i++)
{
    arr2[i]=arr[i]+arr2[i-1];
}

int d,m;
cin>>d>>m;
 
int ways=0;


 

for(int i=m;i<=n;i++)

{
    if(i==m){
         if(arr2[i]==d)
         {
         ++ways;
         }
    }
    else{
    if((arr2[i]-arr2[i-m])==d)
    ++ways;
        
    }
    
}

cout<<ways<<endl;




    return 0;
}
