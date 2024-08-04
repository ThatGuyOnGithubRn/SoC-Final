#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll nnn;
    cin>>nnn;
    string n,m;
    cin>>n>>m;
    // cout<<n<<" "<<m<<endl;
    if(nnn==1 && n[0]=='0' && m[0]=='1'){
        cout<<"NO"<<endl;
    }
    else if(nnn==1){
        cout<<"YES"<<endl;
    }
    




    else{
        // for(int i=0;i<j;i++){
        //     if(n[i]!=m[i] && n[i]=='0'){
        //         cout<<"NO"<<endl;return;
        //     }
        //     else if(n[i]!=m[i] && n[i]=='1'){
        //         cout<<"YES"<<endl;return;
        //     }
        //     else if(n[i]==m[i] && n[i]=='0'){
        //         continue;
        //     }
        //     else{
        //         cout<<"YES"<<endl;return;
        //     }
        // }
        // cout<<"NO"<<endl;return;






        // if(n[0]=='1'){
        //     cout<<"YES"<<endl;return;
        // }
        // int j=0;
        // for(int i=0;i<nnn;i++){
        //     if(n[i]=='1'){
        //         cout<<"YES"<<endl;return;
        //     }
        //     if(m[i]=='1'){
        //         cout<<"NO"<<endl;return;
        //     }
        // }
        // cout<<"YES"<<endl;return;
        for(int i=0;i<nnn;i++){
            if(n[i]=='1'){
                cout<<"YES"<<endl;return;
            }
            else{
                if(m[i]=='0'){continue;}
                else{cout<<"NO"<<endl;return;}
            }
        }
        cout<<"YES"<<endl;return;
        
    }
    // cout<<n<<m<<endl;
}
int32_t main(){
    ll test;
    cin>>test;
    while(test--){
    solve();
    }
}



