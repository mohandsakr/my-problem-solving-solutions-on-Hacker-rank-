/*
problem link:https://www.hackerrank.com/challenges/kaprekar-numbers/problem
problem name:Modified Kaprekar Numbers
status:accept
author :Mohand Sakr

*/

#include <iostream>
#include<vector>
#include <cmath>


using namespace std;

 

int main() {


int p;
int q;

cin>>p>>q;

vector< long long > vect;

for(int i=p;i<=q;i++){
    
     long long power=pow(i,2);
        string s=to_string(power);
        string s2=to_string(i);


    int len=s.length();
    int size=s2.length();
    
     if(len!=1){
     long long part1=stoll(s.substr(0,len-size));
     long long part2=stoll(s.substr((len-size),size));
      if((part1+part2)==i)
    vect.push_back(i);

    }
    else {
        if(power==i){
vect.push_back(i);

        }
    }
    
}


int len=vect.size();

if(len){
for(int i=0;i<len;i++)
{
    cout<<vect[i]<<" ";
    
}
cout<<endl;
}
else {
    cout<<"INVALID RANGE"<<endl;
}

    return 0;
}
