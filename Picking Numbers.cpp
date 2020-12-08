


/*
problem name:Picking Numbers.;
problem link:https://www.hackerrank.com/challenges/picking-numbers/problem
status:Accepted;
author :mohand sakr;
*/




#include <bits/stdc++.h>

using namespace std;

 int arr[105] ;

int main()
{
    
     int n;
     cin>>n;
     for(int i=0;i<n;i++) {
         
         int x;
         cin>>x;
         ++arr[x];
     }
     
     int maxlength=0;
     
     for(int i=0;i<101;i++){
         
              
            maxlength= max(maxlength,(arr[i]+arr[i+1]));
          
     }
     
     
     cout<<maxlength<<endl;
     
     

 
    return 0;
}

 
