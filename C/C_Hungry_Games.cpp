// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// void solve(){
//     ll n,k;
//     cin>>n>>k;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     // ll ans=n*(n+1)/2;
//     // time complexx
//     // for(int i=0;i<n;i++){
//     //     ll sum=0;
//     //     for(int j=i;j<n;j++){
//     //         sum+=a[j];
//     //         if(sum>k){sum=0;ans--;}
//     //     }
//     // }
//     // cout<<ans<<endl;
//                                 // int repeatNum=0;
//                                 // int rep=0;
//                                 // for(int i=0;i<n;i++){
//                                 //     rep+=a[i];
//                                 //     if(rep>k){
//                                 //         rep=0;repeatNum++;
//                                 //     }
//                                 // }

//     ll ans=n*(n+1)/2;
//     ll sum=0;
//     for(int i=0;i<n;i++){
//         sum+=a[i];
//     }
//     ll tempSum=0;
//     int j=0;
//     // ll loopNum=0;
//     // while(true){
//     //     loopNum++;
//     //     int ansorigi=ans;
//     for(int i=0;i<n;i++){
//         tempSum+=a[i];
//         if(tempSum>k){
//             while(tempSum>k){ tempSum-=a[j];j++;ans--;}
//         }
//     }
//         // if(a[n-1]>tempSum){ans--;}
//     //     if(ansorigi==ans){
//     //         break;
//     //     }
//     //     tempSum=-k*(loopNum);
//     // }
//     cout<<ans<<endl;



// }
// int32_t main(){
//     ll test;
//     cin>>test;
//     while(test--){
//     solve();
//     }
// }



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
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vi arr[n];
		int l=0,h=0,sum=a[0];
		while(h<n){
			if(sum<=x){
				h++;
				sum+=a[h];
			}
			else{
				arr[h].push_back(l);
				sum-=a[l];
				l++;
			}
		}
		int dp[n]={0};
		for(int i=0;i<n;i++){
			for(auto lowerElement : arr[i]){
				if(lowerElement==0){
					dp[i]++;
				}
				else{
					dp[i]+=(dp[lowerElement-1]+1);
				}
				// cout<<lowerElement<<" ";
			}
			// cout<<endl;
		}
		sum=n*(n+1)/2;
		for(int i=0;i<n;i++){
			sum-=dp[i];
		}
		cout<<sum<<endl;
		// cout<<n<<" "<<x<<" ";

		// cout<<endl;
	}
}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// //int max and min are already defined
// typedef long long ll;
// #define int ll
// typedef vector<int> vi;
// typedef pair<int,int> pi;
// int32_t main(){
// 	int asd;
// 	cin>>asd;
// 	for(int qwe=0; qwe<asd; qwe++){
// 		int n, x;
// 		cin >> n >> x;
// 		int a[n];
// 		for(int j = 0; j < n; j++) cin >> a[j];
// 		int low = 0, high = 0, sum = a[0];
// 		vi lowers[n];
// 		while(high < n){
// 			if(sum > x){
// 				lowers[high].push_back(low);
// 				sum -= a[low];
// 				low++;
// 			}
// 			else{
// 				high++;
// 				sum += a[high];
// 			}
// 		}
// 		int dp[n];
// 		if(a[0] > x) dp[0] = 1;
// 		else dp[0] = 0;
// 		for(int i = 1; i < n; i++){
// 			dp[i] = 0;
// 			for(auto w : lowers[i]){
// 				if(w == 0) dp[i]++;
// 				else{
// 					dp[i] += (dp[w - 1] + 1);
// 				}
// 				// cout<<w<<" ";
// 			}
// 			// cout<<endl;
// 		}
// 		int ans = ((n * (n + 1)) / 2);
// 		for(int f = 0; f < n; f++){
// 			ans -= dp[f];
// 			// cout<<dp[f]<<" ";
// 		}
// 		// cout<<endl;
// 		cout << ans << '\n';
// 	}
// }