/*
problem link:https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
problem name:Designer PDF Viewer
status:accepted
author: mohand sakr

*/
#include <iostream>
#include<string>
#include<map>
using namespace std;

int main() {
  
  map<char,int> ma;
     string refrence="abcdefghijklmnopqrstuvwxyz";
     for(int i=0;i<26;i++){
         int  x;
         cin>>x;
         ma[refrence[i]]=x;
     }
     string s;
     cin>>s;
     int len=s.length();
     int maxi=0;
     for(int i=0;i<len;i++){
         maxi=max(ma[s[i]],maxi);
     }
     cout<<maxi*len<<endl;
}
