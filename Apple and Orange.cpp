//============================================================================
//problem link:https://www.hackerrank.com/challenges/apple-and-orange/problem
// Name        : Apple.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

   #include <iostream>
 using namespace std;


int main() {
    int s,t,a,b,m,n;
    int orange=0,apple=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i=0;i<m;i++){

        long long z;
        cin>>z;
        z+=a;
        if(z>=s&&z<=t)
            ++apple;
    }
    for(int i=0;i<n;i++){
        long long z;
        cin>>z;
        z+=b;
        if(z>=s&&z<=t){
            ++orange;
        }
    }
    cout<<apple<<endl <<orange<<"\n";

    return 0;
}
