
/*
problem link:https://www.hackerrank.com/challenges/flatland-space-stations/problem
problem name:Flatland Space Station
status:accepted;
author : mohand sakr



*/
#include <bits/stdc++.h>

using namespace std;
int arr[100005]{};
vector<int> vect;
 
  int least(int x){
     for(int i=x;i>=0 ;i--){
         if(arr[i])
         return i;
     }
     return -1;
  }
int flatlandSpaceStations(int n) {
    int maxi=-100;
    sort(vect.begin(),vect.end());
  for(int i=0;i<n;i++){
      
      int rt=1000005;
      int lt=1000005;
      if(!i){
          rt=*lower_bound(vect.begin(),vect.end(),i);
          if(rt!=-1){
              rt=abs(i-rt);
          }
      }
      else if(i==n-1){
          lt=least(i);
      if(lt!=-1){
          lt=abs(lt-i);
      }
          
      }
      else {
          rt=*lower_bound(vect.begin(),vect.end(),i);
          if(rt!=-1){
              rt=abs(i-rt);
          }
              lt=least(i);
      if(lt!=-1){
          lt=abs(lt-i);
      }
          
      }
      maxi=max(maxi,min(rt,lt));
     }
    

return maxi;
}

int main()
{
     int n;
     cin>>n;
     int m;
     cin>>m;
      for(int i=0;i<m;i++){
     int x;
         cin>>x;
         vect.push_back(x);
      ++arr[x];
     
     
 
     }
     
     cout<<flatlandSpaceStations(n);
}
