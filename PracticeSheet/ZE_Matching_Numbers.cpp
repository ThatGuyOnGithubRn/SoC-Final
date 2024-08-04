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
        // if(n%2==0){
        //     cout<<"No"<<endl;
        // }
        // else{
        //     if(n!=1){
        //     cout<<"Yes"<<endl;
        //     for(int i=0;i<n;i++)cout<<i+1<<' '<<(n*2-i*2-1)%n+n+1<<'\n';
        //     }
        //     else{
        //         cout<<"Yes"<<endl;
        //         cout<<"1 2"<<endl;
        //     }
        // }
        if (n % 2 == 0) {
            cout << "No\n";
            return;
        }
        
        cout << "Yes\n";
        for (int i = 1; i <= (n + 1) / 2; i++) {
            cout << i << " " << 2 * n - 2 * i + 2 << "\n";
        }
        for (int i = n; i > (n + 1) / 2; i--) {
            cout << i << " " << 3 * n - 2 * i + 2 << "\n";
        }
    }
}
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int countTriplets() {
//     int n,x;
//     cin>>n>>x;
//     int count = 0;

//     // Iterate over possible values of a
//     for (int a = 1; a <= x; ++a) {
//         // Iterate over possible values of b
//         for (int b = 1; b <= x - a; ++b) {
//             // Maximum possible value for c to satisfy both conditions
//             int maxC = std::min(x - a - b, (n - a * b) / (a + b + 1));
//             if (maxC < 1) continue;

//             // Iterate over possible values of c
//             for (int c = 1; c <= maxC; ++c) {
//                 if (a + b + c <= x && a * b + a * c + b * c <= n) {
//                     ++count;
//                 }
//             }
//         }
//     }

//     return count;
// }

// int main() {
//     int n;
//     cin>>n;
    
//     while(n--){
//         int result = countTriplets();
//     // std::cout << "Number of valid triplets: " << result << std::endl;
//     }
//     return 0;
// }

