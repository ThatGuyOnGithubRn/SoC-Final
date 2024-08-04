#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,k;
    cin>>n>>k;
    multiset<ll> ms={n};
    if(n==1){
        cout<<0<<endl;
        return;
    }
    else{
        ll ans=1;
        if(k>n){
            cout<<ans<<endl;return;
        }
        else{
            ans+=1;
            n-=k;
            if(n%(k-1)==0){
                ans-=1;
            }
            ans+=n/(k-1);
            cout<<ans<<endl;return;

        }
    }
}
int32_t main(){
    ll test;
    cin>>test;
    while(test--){
    solve();
    }
}