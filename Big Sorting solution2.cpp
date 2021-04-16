/*

/*
problem name:Big Sorting;
problem link:https://www.hackerrank.com/challenges/big-sorting/problem;
status:fail on big testcases because time limit;
author :mohand sakr;


*/


#include <bits/stdc++.h>

using namespace std;

 bool cmp(string s,string s2)
{
    return s<s2&&s.length()<s2.length();

}

int main()
{
   int n;
   cin>>n;
    map<int,vector<string>> ma;
        map<int,vector<string>> :: iterator it;

   for(int i=0;i<n;i++){
       string s;
       cin>>s;
       cin.ignore();
       vector<string>ve= ma[s.length()];
       ve.push_back(s);
     ma[s.length()] = ve;

   }
  
  for(it=ma.begin();it!=ma.end();it++){
      vector<string> vect;
      vect =it->second;
      sort(vect.begin(),vect.end());
      int len=vect.size();
      for(int i=0;i<len;i++)
      {
          cout<<vect[i]<<endl;
      }
      
      
      
  }



    return 0;
}

