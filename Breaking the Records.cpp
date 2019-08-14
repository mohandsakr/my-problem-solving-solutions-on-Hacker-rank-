/*
problem link:https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
problem name:Breaking the Records
author :mohand sakr
status: accepted
*/

#include <bits/stdc++.h>

using namespace std;

 
int main()
{
   int n;
   cin>>n;
   int refrence=0;
   int best=0;
   int worst=0;
   int bcount=0;
   int wcount=0;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       if(!i){
           refrence=x;
           best=x;
           worst=x;
       }
       else {
           if(x>best)
           {
               ++bcount;
               best=x;
           
           }
           else if(x<worst&&x<refrence){
               worst=x;
               ++wcount;
           }
       }
       
   }
   cout<<bcount<<" "<<wcount<<endl;

  
}

 
