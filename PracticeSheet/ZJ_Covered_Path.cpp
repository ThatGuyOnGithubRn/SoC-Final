#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int max and min are already defined
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pi;
int32_t main(){
    int v1,v2,t,d,out;
    float x;
    cin>>v1>>v2;
    cin>>t>>d;
    int maxi=max(v1,v2);
    int mini=min(v1,v2);
    if(d!=0){
        x=float(v2-v1+d*t)/(2*d);
        out=(v1+float(d)*x/2)*x +(v2+float(d)*(t-x)/2)*(t-x);
    }
    else{out=v1*t;}
    cout<<out;
    // (v1+1/2d)x2 +(v2+1/2d)(t-x)2;v1+dx=v2+d(t-x)
}

