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
        int n,count=1,sum=0;
        cin>>n;
        string s;
        cin>>s;
        s[0]='(';
        for(int i=0;i<n;i++){
            if(s[i]=='('){count++;}
            else if(s[i]==')'){count--;}
            else if(count>1 && s[i]=='_'){s[i]=')';count--;}
            else if(s[i]=='_'){s[i]='(';count++;}
        }
        vi a,b;
        a.reserve(n/2);
        b.reserve(n/2);
        for(int i=0;i<n;i++){
            if(s[i]=='('){a.push_back(i);}
            else{b.push_back(i);}
        }
        for(int i=0;i<n/2;i++){
            sum+=(b[i]-a[i]);
        }
        cout<<sum<<endl;
    }
}
