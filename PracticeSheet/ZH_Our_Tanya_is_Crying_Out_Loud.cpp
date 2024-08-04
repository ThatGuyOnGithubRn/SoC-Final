#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int max and min are already defined
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pi;
int32_t main(){

        int n,k,A,B,sum=0;
        cin>>n>>k>>A>>B;
        if(k!=1){
            while(true){
                int mod=n%k;
                if(n==mod){cout<<sum+(mod-1)*A;break;}
                sum+=mod*A;
                sum+=min(B,(n-n%k-n/k)*A);
                n/=k;
                // // cout<<n<<" ";
            }
            // cout<<sum<<endl;
        }
        else{
            cout<<(n-1)*A<<endl;
        }
}

