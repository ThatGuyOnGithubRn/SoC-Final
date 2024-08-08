#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int max and min are already defined
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pi;
int32_t main(){
    int asd;
	cin>>asd;
	for(int qwe=0; qwe<asd; qwe++){
        int a,b;
        cin>>a>>b;
        int rem=(a+b)%3;
        // cout<<rem<<" "<<a<<" "<<b;
        if(rem!=0){cout<<"NO"<<endl;continue;}
        if(a>2*b || 2*a<b){
            cout<<"NO"<<endl;continue;
        }
        cout<<"YES"<<endl;

    }
}