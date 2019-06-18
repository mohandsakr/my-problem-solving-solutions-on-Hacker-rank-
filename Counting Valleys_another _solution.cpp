/*
probelm link:
status:accepted
problem name:Counting Valleys
author : mohand sakr
*/



#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int prevlevel=0;
    int currentlevel=0;
    int count=0;
    for (int i = 0; i < n; i++) {
      
        if (s[i] == 'U') {
          prevlevel = currentlevel;

          ++currentlevel;

        } else {
          prevlevel = currentlevel;
          --currentlevel;
        }
        if (i && !currentlevel && prevlevel < 0) {
          ++count;
          
        }
        // cout<<currentlevel<<" " ;
    }
    return count;
}

int main()
{
    

    int n;
    cin >> n;
    

    string s;
    cin>>s;

    int result = countingValleys(n, s);

   cout  << result << "\n";

 
    return 0;
}
