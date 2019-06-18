/*problem name: Jumping on the Clouds
problem link:
status:accepted
author :mohand sakr
*/

#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  cin.clear();
  vector<char> s;
  for (int i = 0; i < n; i++) {
    char x;
    cin >> x;
    s.push_back(x);
  }
  int steps = 0;
  int next = 0;

  for (int i = 0; i < n - 1; i++) {
    if (next == i) {
      ++steps;
      if (s[i + 2] == '0') {
        next = i + 2;
        // cout<<next<<" ";
      } else {
        next = i + 1;
        // cout<<next<<" ";
      }
    }
  }
  cout << steps;
}
