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
    for(int i=0;i<n;i++){
        int x,y,j=1;
        cin>>y>>x;
        if(y>x){
            // j=(y-1)*(y-1);
            if(y%2==1) {j=(y-1)*(y-1);j+=(x);}
            else { j=y*y;j-=(x-1); }
        }
        else{
            // j=(x-1)*(x-1);
            if(x%2==0) {j=(x-1)*(x-1);j+=(y);}
            else { j=x*x;j-=(y-1); }
        }
        cout<<j<<endl;
    }  
}
