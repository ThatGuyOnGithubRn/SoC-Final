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
        int n;
        cin>>n;
        int a[n],p[n-1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            cin>>p[i];
        }
        int chil=0,i=n-1;
        while(true){
            chil=0;
            // vertex number i+1
            // number of children is all places where p[j]=i+1
            if(a[i]==0){
                for(int j=0;j<n-1;j++){
                    if(p[j]==i+1){a[j+2]--;chil++;}
                }
                if(chil==0){
                    break;
                }
                a[i]++;
                i--;
            }
            cout<<a[0];
        }
    }
}
