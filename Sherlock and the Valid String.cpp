/*

problem link:https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem
problem name:Sherlock and the Valid String
status: accepted
author : mohand sakr




*/


#include <iostream>
#include<string>
#include<map>
using namespace std;
 int main() {
    
    string s;
    cin>>s;
    map<char,int> ma;
        map<char,int> ::iterator it;

    int len=s.length();
    for(int i=0;i<len;i++)
    {
     ++ma[s[i]];
    }
    int lastvalue=0;
    int maxdiffrence=0;
        int onediffrence=0;
    for(it=ma.begin();it!=ma.end();it++)
    {
        if(it==ma.begin())
        {
        lastvalue=it->second;
            
        }
        
        int dif=abs(lastvalue-(it->second));
        if(dif==1||it->second==1)
        {
            ++onediffrence;

        }
        else if(dif>1){
            ++maxdiffrence;
        }
        
        // cout<<it->first<<"  "<<it->second<<" "<<endl;
        
    }
    
    if(maxdiffrence){
        cout<<"NO"<<endl;
    }
    else if(onediffrence>1){
        
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
    
    
 
 






    return 0;
}
