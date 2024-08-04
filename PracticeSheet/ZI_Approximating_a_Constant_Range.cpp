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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int len=0,maxlen=0,mini=a[0],maxi=a[0];
    for(int i=0;i<n;i++){
        if(a[i]!=a[0]){mini=min(a[0],a[i]);maxi=max(a[i],a[0]);break;}
    }
    for(int i=0;i<n;i++){
        if(a[i]==mini || a[i]==maxi) {len++;maxlen=max(len,maxlen);}
        else{
            len=2;
            for(int j=i-2;j>=0;j--){
                if(a[j]==a[i-1]){
                    len++;
                }
                else{
                    break;
                }
            }
            mini=min(a[i],a[i-1]);
            maxi=max(a[i],a[i-1]);
            // cout<<len<<" ";
        }
    }
    cout<<maxlen;
}

