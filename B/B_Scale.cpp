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
        int n,k;
        cin>>n>>k;
        string s;
        // cout<<n<<" "<<k<<endl;
        int a[n][n];
        for(int i=0;i<n;i++){
            cin>>s;
            // cout<<s<<endl;
            for(int j=0;j<n;j++){
                a[i][j]=s[j]-48;
            }
        }
        for(int i=0;i<n;i+=k){
            for(int j=0;j<n;j+=k){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
}
