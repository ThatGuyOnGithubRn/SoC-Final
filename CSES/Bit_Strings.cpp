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
    int x=1;
    int y=1e9+7;
    for(int i=0;i<n;i++){
        x=(x*2)%(y);
    }
    cout<<x % y;
}