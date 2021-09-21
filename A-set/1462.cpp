// two pointer approach - o(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        // code
        int i = 0;
        int j = n-1;
        while(i<=j){
            cout<<arr[i++]<<" "<<arr[j--]<<" ";
        }
        cout<<endl;
    }
}