
/*
problem name:Two Strings
problem link:https://www.hackerrank.com/challenges/two-strings/problem
status:accepted ;
author : Mohand Sakr
*/


#include <bits/stdc++.h>
#include <iostream>

using namespace std;

 

int main()
{
   int t;
   cin>>t;
   while (t--) {
   string s,s2;
   cin>>s>>s2;
   int found=0;
   int len=s.length();
   for(int i=0;i<len;i++){
       if(s2.find(s[i])!=-1)++found;

   }

   if(found)
   {
       cout<<"YES\n";
   }
   else
    {
cout<<"NO\n";
   }



   }

    return 0;
}
