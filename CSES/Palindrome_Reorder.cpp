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
    bool odd=false;
    deque<char> d;
    map <char,int> m;
    for(auto i:s){
        m[i]++;
    }
    int maxel=0;
    char maxin;
    for(auto i:m){
        if(i.second%2==1 && odd==false){
            if(i.second>maxel){maxel=max(maxel,i.second);maxin=i.first;odd=true;}
        }
        else if(i.second%2==1 && odd==true){
            cout<<"NO SOLUTION";return 0;
        }
    }
    while(maxel--) d.push_back(maxin);
    for(auto i:m){
        // cout<<i.first<<" "<<i.second<<endl;
        if(i.second%2==0){
            for(int k=0;k<i.second/2;k++){
                d.push_back(char(i.first));
                d.push_front(char(i.first));
            }
        }
    }
    for(auto i:d){
        cout<<i;
    }

}