/*
problem link:
problem name :Electronics Shop
staus:accepted 
author : Mohand Sakr



*/

#include <iostream>
using namespace std;

int main() {
int b,n,m;
cin>>b>>n>>m;
int maxi=0;

int arr[n];
int arr2[m];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<m;i++){
    cin>>arr2[i];
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    {
        if((arr[i]+arr2[j])<=b)
        {
            maxi=max((arr[i]+arr2[j]),maxi);
        }
        
    }
}
    
    if(maxi)
cout<<maxi<<endl;
else {
    cout<<-1<<endl;
}



    return 0;
}
