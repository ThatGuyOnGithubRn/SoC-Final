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
    int k=0;
    while(n>=5){
        n/=5;
        k+=n;
    }
    cout<<k;
}