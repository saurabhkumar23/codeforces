#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // code
        int ep = 0;
        int op = 0;
        int ec = 0;
        int oc = 0;
        int swapNeeded = 0;
        if(n%2 == 0){
            ep = op = n/2;
        }
        else{
            ep = (n/2)+1;
            op = n/2;
        }
        for(int i=0;i<n;i++){
            if(a[i]%2 == 0){
                ec++;
            }
            else{
                oc++;
            }
            if(i%2 != a[i]%2){
                swapNeeded++;
            }
        }
        if(ec==ep && oc==op){
            cout<<swapNeeded/2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}