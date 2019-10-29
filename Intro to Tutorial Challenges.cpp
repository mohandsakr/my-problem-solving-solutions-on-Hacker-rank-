/*
problem link:https://www.hackerrank.com/challenges/tutorial-intro/problem
status:accepted
problem name:Intro to Tutorial Challenges


*/
#include <iostream>
using namespace std;


 int main() {
 int v;
 cin>>v;
 int n;
 cin>>n;
 
  
 for(int i=0;i<n;i++){
     int x;
     cin>>x;
     if(x==v){
         cout<<i<<endl;
         break;
     }
 }
 
 
 
 
     return 0;
}
