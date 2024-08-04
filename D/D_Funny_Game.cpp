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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<bool> used(n, false);
        vector<pair<int, int>> edges(n - 1);
        for (int x = n - 1; x >= 1; x--) {
            vector<int> possibleRems(x, n);
            for (int i = 0; i < n; i++) {
                if(used[i]){
                    continue;
                }
                int t = a[i] % x;
                if(possibleRems[t] == n){
                    possibleRems[t] = i;
                }
                else{
                    edges[x - 1] = {i+1, possibleRems[t]+1};
                    used[i] = true;
                    break;
                }
            }
        }
        cout << "YES" << '\n';
        for (auto i : edges) {
        cout << i.first << " " << i.second << '\n';
        }





        // int r=0;
        // vector<pair<int,int>> v(n-1);
        // vector<bool> used(n,false);
        // for(int i=n-1;i>=1;i++){
        //     for(int j=0;j<n;j++){
        //         if(used[j]==true){continue;}
        //         else{

        //         }
        //     }
        // }



        // do not connect 2 connected components--> xy yz ---> no xz
        // operations on 2 elements> put them in connected array
        // once in the array make sure 2 numbers selected arent both from that array
        //operation1 > any 2 numbers
        //operation2 > any 2 numbers of same ordinality but only 1 in connected array at MAX can be 0 from connected array
        //make 2d array and from 1st row subtract all a[0] and so on
        // upper truiangle stores cvarious differences btw nnumbers
        // store another array of all 0s which increases by one if xth operation satisfies the differnce
        // too  much time will be taken n2 and also not nec correct 





        // divide by n-1; n numbers 2 must have same remainder
        // divide by n-2; n-1 numbers(both from last time cnanot be taken one can) must have 2 same remainders 
        // SIMPLE FUCKIN PIGEON HOLE    
    }
}