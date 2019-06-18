/*
problem link:https://www.hackerrank.com/challenges/repeated-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup
problem name:Repeated String
status:accepted
author :mohand sakr

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  long long a;
  cin >> a;
  long long len = s.length();
  long long OnOnestring = count(s.begin(), s.end(), 'a');
  long long repeatnum = a / len;
  long long result = 0;

  if (a % len) {

    string s2 = s.substr(0, a % len);
    long long rest = count(s2.begin(), s2.end(), 'a');
    result = rest + (repeatnum * OnOnestring);

  } else {
    result = (repeatnum * OnOnestring);
  }
  cout << result;

  return 0;
}
