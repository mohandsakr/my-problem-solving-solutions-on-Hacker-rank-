/*
problem link:
problem name:Cats and a Mouse
status: accept
author

*/

#include <bits/stdc++.h>

using namespace std;

 
int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(abs(a-c)<abs(b-c))
        {
            cout<<"Cat A\n";
        }
        else if((abs(b-c)<abs(a-c)))
        {
            cout<<"Cat B\n";
        }
        else {
            cout<<"Mouse C\n";
        }
    }
    
    return 0;
}
 
