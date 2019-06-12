/*

*problem link:https://www.hackerrank.com/challenges/array-left-rotation/problem
*problem name:Left Rotation
*status :accepted 
*author : mohand sakr
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> vect;
  vector<int> vect2;
  for (int i = 0; i < n; i++) {
    int s;
    cin >> s;
    vect.push_back(s);
  }

  for (int i = k; i < n; i++) {
    vect2.push_back(vect[i]);
    // cout<<vect[i]<<endl;
  }
  for (int i = 0; i < k; i++) {
    vect2.push_back(vect[i]);
  }
  for (int i = 0; i < n; i++) {
    cout << vect2[i] << " ";
  }
}
