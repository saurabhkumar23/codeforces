#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int> (3));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    // code
    int maxsol = 0;
    for(int i=0;i<n;i++){
        int noOfknownSol = 0;
        for(int j=0;j<3;j++){
            if(a[i][j] == 1){
                noOfknownSol++;
            }
        }
        if(noOfknownSol >= 2){
            maxsol++;
        }
    }
    cout<<maxsol<<endl;
}