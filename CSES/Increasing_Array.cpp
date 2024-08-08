#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int max and min are already defined
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pi;
int32_t main(){
    int n;
    cin>>n;
    int a[n+1],ans=0;
    a[0]=0;
    for(int i=1;i<n+1;i++){
        cin>>a[i];
    }
    for(int i=1;i<n+1;i++){
        if(a[i]<a[i-1]){ans+=a[i-1]-a[i];a[i]=a[i-1];}
    }
    cout<<ans;
}
