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
    if((n*(n+1)/2)%2==1){
        cout<<"NO";return 0;
    }
    int sum=n*(n+1)/4;
    
    cout<<"YES"<<endl;
    vector<int> a;
    vector<int> b;
    if(n%4==3){
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);
        for(int i=4;i<=n;i++){
            if(i%4==0 || i%4==3){a.push_back(i);}
            else{b.push_back(i);}
        }
    }
    else{
        for(int i=1;i<=n;i++){
            if(i%4==1 || i%4==0){a.push_back(i);}
            else{b.push_back(i);}
        }
    }
    cout<<a.size()<<endl;
    for(auto i: a){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<b.size()<<endl;
    for(auto i: b){
        cout<<i<<" ";
    }
    cout<<endl;
}