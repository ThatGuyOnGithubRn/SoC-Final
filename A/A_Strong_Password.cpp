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
        string s;
        cin>>s;
        bool two=false;
        int n=s.length(),j=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                two=true;
                j=i;
            }
        }
        if(two==true){
            for(int i=0;i<n;i++){
                cout<<s[i];
                if(i==j){
                    if(s[i]!='z'){
                        cout<<char(s[i]+1);
                    }
                    else{
                        cout<<char(s[i]-1);
                    }
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                cout<<s[i];
            }
            if(s[n-1]!='z'){
                cout<<char(s[n-1]+1);
            }
            else{
                cout<<char(s[n-1]-1);
            }
        }
        cout<<endl;
        // int n=s.length(),in=0;
        // if(n==1){
        //     cout<<s[0]<<char(s[0]+1)<<endl;
        //     continue;
        // }
        // for(int i=0;i<n-1;i++){
        //     cout<<s[i];
        //     if(s[i]==s[i+1] && in==0){
        //         cout<<char(s[i]+1);
        //         in++;
        //     }
        // }
        // cout<<s[n-1];
        // if(in==0){
        //     if(s[n-1]!='z'){
        //     cout<<char(s[n-1]+1);
        //     }
        //     else{
        //         cout<<'a';
        //     }
        // }
        // cout<<endl;
    }
}
