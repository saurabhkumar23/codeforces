#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        cin>>a[i].second;
    }
    // code
    int ans = 0;
    for(int i=0;i<n;i++){
        if(a[i].first < a[i].second){
            ans--;
        }
        else if(a[i].first > a[i].second){
            ans++;
        }
    }
    if(ans > 0){
        cout<<"Mishka"<<endl;
    }
    else if(ans < 0){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
}