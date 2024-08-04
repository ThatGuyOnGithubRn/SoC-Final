#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int max and min are already defined
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pi;
int comb(int a, int b) {
    if (b > a) return 0; // If b is greater than a, the result is 0
    if (b == 0 || b == a) return 1; // C(a, 0) and C(a, a) are 1

    b = min(b, a - b); // Since C(a, b) = C(a, a-b), use the smaller value for fewer iterations
    int ret = 1;

    for (int i = 1; i <= b; ++i) {
        ret = ret * (a - i + 1) / i;
    }

    return ret;
}
int32_t main(){
	int n, m; cin >> n >> m;
	int ans=0;
    int modu=1e9+7;
    // cout<<modu<<endl;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			int a = n-i+1, b = j;
			int u = (comb(a+m-2, m-1) * comb(b+m-2, m-1)) % modu;
            // cout<<u<<" ";
			ans += u;
            if(ans>modu) ans=ans%modu;
		}
        
	}
	cout << ans << endl;
	return 0;
}

