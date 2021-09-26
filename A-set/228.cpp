#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    // code
    unordered_map<int,int> mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    mp[d]++;
    cout<<4-mp.size()<<endl;
}