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
        string s1,s2;
        cin>>s1>>s2;
        while(k--){
            int l,r,count=0;
            cin>>l>>r;
            string s1s=s1.substr(l-1,r-l+1);
            string s2s=s2.substr(l-1,r-l+1);
            for(int i=0;i<r-l+1;i++){
                auto it=find(s2s.begin(),s2s.end(),s1s[i]);
                if(it==s2s.end()){
                    count++;
                    // cout<<*it<<" ";
                }
                else{
                    // cout<<it-s2s.begin()<<" ";
                    s2s.erase(it-s2s.begin(),1);
                }
            }
            cout<<count<<endl;
        }
    }
}
