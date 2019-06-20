/*
problem link:https://www.hackerrank.com/challenges/grading/problem
problem name:Grading Students
status:accepted
author :mohand sakr


*/
#include <bits/stdc++.h>

using namespace std;
 int getNextGrage(int x){
    int result=0;
     for(int i=0;i<=100;i++){
         if((i+x)%5==0){
             result=i;
             break;
         }
     }
     return  result;
 }


 int main(){
     
 
     int x;
     cin>>x;
     for(int i=0;i<x;i++){
         int y;
         cin>>y;
         
         int w=getNextGrage(y);
         if(w<3)
         {
         int a= y+w;
         if(a>=40)cout<<a<<"\n";
         else {
             cout<<y<<"\n";
         }
         }
         else {
             cout<<y<<"\n";
         }
         
     }


 }
