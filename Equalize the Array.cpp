/*
problem link:https://www.hackerrank.com/challenges/equality-in-a-array/problem
problem name:Equalize the Array ;
status:accepted
author :mohand sakr

*/
#include  <algorithm>
#include <iostream>
 using namespace std;
 int main()
 {
int n;
cin>>n;
int arr[101]={};
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    ++arr[x];
}
int max=0;
int maxelement=0;
for(int i=0;i<101;i++){
    if(arr[i]){
        if(arr[i]>max){
        max=arr[i];
        maxelement=i;
        }
    }
}
int result=0;
for(int i=0;i<101;i++){
     if(max==1)
     result=n-1;
    else if(arr[i]<=max&&i!=maxelement)
     result+=arr[i];
     

}
cout<<result<<"\n";
 }
