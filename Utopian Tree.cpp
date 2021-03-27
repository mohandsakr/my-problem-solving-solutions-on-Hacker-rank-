/**
* problem name:Utopian Tree ;
* problem link: https://www.hackerrank.com/challenges/utopian-tree/problem 
* status:Accepted;
* author :Mohand Sakr;
*/

#include <bits/stdc++.h>

using namespace std;

 int utopianTree(int n) {
   
  int result=1;
 for(int i=1;i<=n;i++){
     if(i&1)
    {
    result*=2;
    }
    else {
    result+=1;
        
    }   
}

return result;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
       cout<< utopianTree (n)<<endl;
        
           }

    return 0;
}
