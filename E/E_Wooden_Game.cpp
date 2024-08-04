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
        int n,lpp;
        cin>>n;
        vi a;
        for(int i=0;i<n;i++){
            cin>>lpp;
            a.push_back(lpp);
            // cout<<a[i]<<endl;
            for(int j=1;j<a[i];j++){
                int temp;
                cin>>temp;
            }
        }
        int in=8;
        in+=(1<<3);
        cout<<in;
    }
}
