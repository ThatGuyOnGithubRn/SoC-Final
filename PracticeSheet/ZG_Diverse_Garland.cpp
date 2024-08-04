#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int max and min are already defined
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pi;
int32_t main(){
    int n,count=0;cin>>n;
	string s;
	cin>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            arr[i]=0;
        }
        if(s[i]=='G'){
            arr[i]=1;
        }
        if(s[i]=='B'){
            arr[i]=2;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<n-2;i++){
        if(arr[i]==arr[i+1] && arr[i+1]!=arr[i+2]){
            count+=1;
            arr[i+1]=3-arr[i]-arr[i+2];
        }
        else if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2]){
            count+=1;
            if(arr[i]==1){arr[i+1]=2;}
            else{arr[i+1]=2-arr[i];}
        }
    }
    if(arr[n-2]==arr[n-1]){
        if(n>2) {arr[n-1]=arr[n-3];}
        if(n==2){arr[n-1]=(arr[n-1]+1)%3;}
        count++;
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    cout<<count<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cout<<'R';
        }
        if(arr[i]==1){
            cout<<'G';
        }
        if(arr[i]==2){
            cout<<'B';
        }
    }
}