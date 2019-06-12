/*

problem link:https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem
problem name:Project Euler #2: Even Fibonacci numbers
status:accepted.
author mohand sakr

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int t;
    cin>>t;
    unsigned long long arr[1000];
    arr[0] =1  ;
    arr[1]= 2  ;
    for (int i = 2; i < 120; i++) {
        arr[i]=arr[i-1]+arr[i-2];
    }
    while (t--) {
      unsigned long long n;
      cin >> n;
      unsigned long long sum = 0;
      for (int i = 0; i < 120; i++) {
        if (arr[i] <= n) {
          if (arr[i] % 2 == 0)
            sum += arr[i];
        } else {
          break;
        }
        }
        cout<<sum<<"\n";
    }
    return 0;
}


