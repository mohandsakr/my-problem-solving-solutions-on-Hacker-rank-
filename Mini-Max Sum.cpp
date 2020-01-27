/*
problem link:https://www.hackerrank.com/challenges/mini-max-sum/problem
problem name:Mini-Max Sum
status:accepted
author :mohand sakr


*/

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
 
int main()
{
unsigned long long result=0;
    long long arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        result+=arr[i];

    }

    unsigned long long mini=result;
    unsigned long long maxi=0;
    for(int i=0;i<5;i++){
        mini=min(mini,(result-arr[i]));
        maxi=max(maxi,(result-arr[i]));
    }

     cout<<mini<<" "<<maxi<<endl;

     return 0;
}
