//============================================================================
//problem link: https://www.hackerrank.com/challenges/solve-me-first
// Name        : Solve_Me_First.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status :accepted
//============================================================================


#include <iostream>
using namespace std;

int solveMeFirst(int a, int b) {
 int sum2=a+b;
    return sum2;

}
int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
