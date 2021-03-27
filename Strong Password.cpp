/*
problem name:Strong Password;
problem link:https://www.hackerrank.com/challenges/strong-password/problem
status:Accepted;
author :Mohand Sakr;
*/


#include <bits/stdc++.h>

using namespace std;


string check(string password){
    string bitCheck="00000";
    int len=password.length();
    string speialCharchters="!@#$%^&*()-+";
    
    if(len>=6)
        {
            bitCheck[0]='1';
        }
        
    for(int i=0;i<len;i++){
        
        if(len>=6)
        {
            bitCheck[0]='1';
        }
        
        if(isupper(password[i])){
            bitCheck[1]='1';
        }

        if(islower(password[i])){
            bitCheck[2]='1';
        }
        if(speialCharchters.find(password[i])!=-1)
        {
             bitCheck[3]='1';
            
        }
        if(isdigit(password[i]))
        {
            bitCheck[4]='1';
        }
        
 
    }
    
    
    
     return  bitCheck;
}

 int minimumNumber(string password) {
     
 string  passwordCheck=check(password);

 
 int rest=0;
 int result=0;
 if(passwordCheck[0]=='0') 
 {
 rest=6-password.length();
 }

     for(int i=1;i<5;i++){
      if(passwordCheck[i]=='0')
      {
      ++result;
      }
     }

if(result+password.length()>=6)
{
    return result;
}
else {
return 6-password.length();
}

}

int main()
{
     
     int n;
     
     cin>>n;
     string password;
     cin>>password;
     
     cout<<minimumNumber(password)<<endl;
     
    return 0;
}
