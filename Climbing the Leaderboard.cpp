/*
problem link:https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
problem name:Climbing the Leaderboard
status :accepted
author :mohand sakr..

*/


#include<vector>
#include <algorithm>
#include<map>
#include <iostream>
using namespace std;

int n;
vector<int> board;
map<int,int> refrence;
 
int m;

int main() {
cin>>n;


for(int i=0;i<n;i++){
	int x;
	cin>>x;
	board.push_back(x);
}

sort(board.begin(),board.end());
reverse(board.begin(),board.end());

int currentscore=0;
for(int i=0;i<n;i++){
	if(!refrence[board[i]])
	{
			refrence[board[i]]=++currentscore;
 		
	}
	
}
sort(board.begin(),board.end());
cin>>m;
vector<int>::iterator lower;

for(int i=0;i<m;i++)	
{
	int x;
	cin>>x;

  lower=lower_bound(board.begin(),board.end(),x);
  int value=*lower;
  if(value){ 
  if(x==value){
  	cout<<refrence[x]<<endl;
  }
  else  
  {
  	cout<<refrence[value]+1<<endl;
  }
  	
  }
  else {
  	cout<<1<<endl;
  }

}

 




return 0;
}
