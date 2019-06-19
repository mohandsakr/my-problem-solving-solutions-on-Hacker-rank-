  /*
  problem link:https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
  problem name: 2D Array - DS
  status:accept 
  author : mohand sakr
  
  
  
  */
  #include <bits/stdc++.h>

using namespace std;


int hourglassSum(vector<vector<int>> arr) {
int maxi=-100;
for(int i=0;i<6;i++){
for(int j=0;j<6;j++){
    if(i+2<=5 &&j+2<=5){
        maxi=max(maxi,
        (arr[i][j]+arr[i+2][j]+arr[i+2][j+2]+arr[i][j+2]+arr[i+1][j+1]+arr[i][j+1]+arr[i+2][j+1]));
    }
}

}
return maxi;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
