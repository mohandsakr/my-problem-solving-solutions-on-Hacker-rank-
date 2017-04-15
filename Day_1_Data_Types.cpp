//============================================================================
//problem link:https://www.hackerrank.com/challenges/30-data-types
// Name        : Day_1_Data_Types.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted ;
//============================================================================

#include <iostream>
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int x;
    double y;
     string z;

        // Read and save an integer, double, and String to your variables.
    cin>>x>>y;
    cin.ignore();
    getline(std::cin,z);

        // Print the sum of both integer variables on a new line.
    cout<<i+x<<endl;



        // Print the sum of the double variables on a new line.
    double sum =d+y;
    cout << fixed << setprecision(1)<<sum<<endl;

        // Concatenate and print the String variables on a new line
    cout<<s;
    cout<<z;
    cout<<endl;
        // The 's' variable above should be printed first.

	return 0;
}
