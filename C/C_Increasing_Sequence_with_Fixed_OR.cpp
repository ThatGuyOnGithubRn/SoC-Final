#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int bintodec(bitset<19> s){
    int dec=0;
    // cout<<s.size();return dec;
    for(int i=s.size()-1;i>=0;i++){
        if(s[i]==1){dec+=pow(2,i);}
    }
    return dec;
}



void solve(){
    int n;
    cin>>n;
    // string bin;
    // while(n>1){
    //     if(n%2==1){
    //         bin+='1';
    //     }
    //     else{bin+='0';}
    //     n/=2;
    // }
    // bin+='1';
    // reverse(bin.begin(), bin.end());








    // vector<int> v;
    // v.reserve(n);
    // v.push_back(n);
    // ll i=0;
    // if(n==1){
    //     cout<<1<<endl;cout<<1<<endl;return;
    // }
    // // for(auto k: v){
    // //     cout<<k<<" ";
    // // }
    // ll lastnum=n;
    // while(lastnum && v[i]>=n/2){
    //     lastnum--;
    //     // cout<<v[i]<<" "<<lastnum<<endl;
    //     if( ( v[i] | lastnum ) == n ){
    //         // cout<<v[i]<<" "<<lastnum<<endl;
    //         v.push_back(lastnum);
    //         i++;
    //     }
    // }
    // i++;
    // reverse(v.begin(),v.end());
    // cout<<i<<endl;
    // for(auto k: v){
    //     cout<<k<<" ";
    // }
    // cout<<endl;
    bitset<19> b=16;
    // cout<<bintodec(b);
    // cout<<pow(2,3);
    
    
    
    
    
    // bitset<19> b=n;
    // bool leadin=true;
    // for(int iinbit=18;iinbit>=0;iinbit--){
    //     if(b[iinbit]==1){
    //         b[iinbit]=0;
    //         cout<< bintodec(b)<<" ";
    //         b[iinbit]=1;

    //     }
    // }
    // cout<<endl;



    // ll m=n;
    // vector<int> v;
    // v.reserve(n);
    // if(n==1){
    //     cout<<1<<endl;cout<<1<<endl;return;
    // }
    // int count=1; 
    // while(n!= 0){n=n&(n-1);count++;} 
    // cout<<count<<endl;

}
int32_t main(){
    ll test;
    cin>>test;
    while(test--){
    solve();
    }
}