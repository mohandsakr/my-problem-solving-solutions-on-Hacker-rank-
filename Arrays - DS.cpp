/*
problem link:https://www.hackerrank.com/challenges/arrays-ds/problem
problem name: Arrays - DS
status:accpted ;
author : mohand sakr; 
*/


 

 vector<int> reverseArray(vector<int> a) {
vector<int> vect ; 
int len=a.size();
for(int i=len-1;i>=0;i--){
    vect.push_back(a[i]);
}
return vect;

}
