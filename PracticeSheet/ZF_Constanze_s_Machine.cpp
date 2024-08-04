#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int max and min are already defined
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pi;
int32_t main(){
	string s;
	cin>>s;
    int ma=1e9+7;
    int n = s.length(),count=1;
    int ulon=0,nlon=0,maxu=0,maxn=0;
    for(int i=0;i<n;i++){
        if(s[i]=='u'){ulon++;maxu=max(maxu,ulon);}
        if(s[i]=='n'){nlon++;maxn=max(maxn,nlon);}
        if(s[i]=='m'){cout<<0;return 0;}
        if(s[i]=='w'){cout<<0;return 0;}
    }
    int maxi=max(maxu,maxn);
    int arr[maxi];
    arr[0]=1;
    arr[1]=2;
    for(int i=2;i<maxi;i++){
        arr[i]=(arr[i-1]+arr[i-2])%(ma);
    }
    ulon=0;
    nlon=0;
    s.append("a");
    for(int i=0;i<n+1;i++){
        if(s[i]=='u'){ulon++;}
        else{
            if(ulon>1){
                count*=arr[ulon-1]%(ma);
                // cout<<count<<" ";
                // cout<<arr[ulon-1]<<endl;
            }
            ulon=0;
        }
        if(s[i]=='n'){nlon++;}
        else{
            if(nlon>1){
                count*=arr[nlon-1]%(ma);
                // cout<<count<<" ";
                // cout<<arr[nlon-1]<<endl;
            }
            nlon=0;
        }

    }
    // cout<<1e9+7;
    cout<<count%ma;
}