#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int max and min are already defined
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pi;
int32_t main(){
	string s;
    cin>>s;
    int maxlen=1,finalmax=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){maxlen++;if(i==s.length()-1){if(maxlen>finalmax){finalmax=maxlen;}}}
        else{if(maxlen>finalmax){finalmax=maxlen;}maxlen=1;}
    }
    cout<<finalmax;
}
