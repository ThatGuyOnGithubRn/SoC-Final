#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,m;
    cin>>n>>m;
    // cout<<n<<m<<endl;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[(i+n-1)%n][(j+m-1)%m];
        }
    }
    if(n==1 && m==1){cout<<-1<<endl;return;}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int32_t main(){
    ll test;
    cin>>test;
    while(test--){
    solve();
    }
}