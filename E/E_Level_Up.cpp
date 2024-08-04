#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int max and min are already defined
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pi;
int32_t main(){
	int n,q;
	cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<q;j++){
        int monsNum,k,num=0;
        cin>>monsNum>>k;
        int mclvl=1;
        for(int i=0;i<n;i++){
            if(monsNum==i+1){
                if(mclvl<=a[i]){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            if(mclvl<=a[i]){
                num++;
                int rem=num%k;
                if(rem==0){
                    mclvl++;
                }
            }

        }
    }
}
