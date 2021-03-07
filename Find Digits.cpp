
/*
problem link:https://www.hackerrank.com/challenges/find-digits/problem
problem name: Find Digits
status:accpted ;
author : mohand sakr; 
*/




#include <bits/stdc++.h>

using namespace std;

 

int main()
{
 
 int t;
 cin>>t;
 
 while(t--){
    string s;
    cin>>s;
    
     
     int di=0;
    
    int len=s.length();
    
    for(int i=0;i<len;i++)
    {
        int x=stoi(s);
        int d=s[i]-'0';
        
         if(d!=0&&x%d==0)
        ++di;
       
      }
     
     
     cout<<di<<"\n";
     
     
 }
 
 
  
    return 0;
}
