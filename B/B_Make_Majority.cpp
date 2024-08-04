#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    ll n;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='0' && s[i+1]=='0'){
            s.erase(s.begin()+i+1);
            i--;
        }
    }
    ll count=0;
    for(auto i :s){
        if(i=='1'){
            count++;
        }
        else{
            count--;
        }
    }
    if(count<=0){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
    cout<<endl;
}
int32_t main(){
    ll test;
    cin>>test;
    while(test--){
    solve();
    }
}