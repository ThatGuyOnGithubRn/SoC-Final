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
        int n,count=0;
        cin>>n;
        string r1,r2;
        cin>>r1>>r2;
        for(int i=0;i<n-2;i++){
            if(r1[i]=='x' && r1[i+2]=='x'){
                if(r1[i+1]=='.' && r2[i]=='.' && r2[i+1]=='.' && r2[i+2]=='.'){
                    count++;
                }
            }
            if(r2[i]=='x' && r2[i+2]=='x'){
                if(r2[i+1]=='.' && r1[i]=='.' && r1[i+1]=='.' && r1[i+2]=='.'){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}
