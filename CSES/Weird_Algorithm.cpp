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
    while(n!=1){
        cout<<n<<" ";
        if(n%2==0){n/=2;}
        else{
            n=n*3+1;
        }
    }
    cout<<1;
}
