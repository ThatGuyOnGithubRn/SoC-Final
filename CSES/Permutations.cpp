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
    if(n==3 || n==2){cout<<"NO SOLUTION";return 0;}
    for(int i=n-1;i>0;i-=2){
        cout<<i<<" ";
    }
    
    for(int i=n;i>0;i-=2){
        cout<<i<<" ";
    }
}
