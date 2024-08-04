#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int max and min are already defined
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pi;
int32_t main(){
    int qwe;
    cin>>qwe;
    for(int qwer=0;qwer<qwe;qwer++){
        int n,m;
        cin>>n>>m;
        int arr[n];
        int dp[m+1]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(auto i:arr){
            if(i<=m){
                dp[i-1]+=i;
            }
        }
        for(int i=0;i<m;i++){
            dp[i]=dp[i]+dp[i+1];
        }
        int maxi=0;
        for(int i=0;i<=m;i++){
            if(dp[i]>m){continue;}
            maxi=max(maxi,dp[i]);
            // cout<<dp[i]<<" ";
        }
        cout<<maxi<<endl;
    }
}

