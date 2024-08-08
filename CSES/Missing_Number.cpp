#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int max and min are already defined
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pi;
int32_t main(){
	int n,j;
	cin>>n;
    int sum=(n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        cin>>j;
        sum-=j;
    }
    cout<<sum;
}
