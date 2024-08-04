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
        int n,k,count=0;
        cin>>n>>k;
        // for(int a=1;a<n;a++){
        //     for(int b=1;b<k-a;b++){
        //         for(int c=1;c<k-a-b+1;c++){
        //             if(a*b+b*c+c*a<=n){
        //                 count++;
        //             }
        //         }
        //     }
        // }
        // cout<<count<<endl;
        





        for(int sk=3;sk<=k;sk++){
            int a=sk/3,b=sk/3,c=sk/3;
            if(sk%3==1){c++;}
            if(sk%3==2){b++;c++;}
            while(true){
                if(a*b+b*c+c*a<=n){
                    count+=(sk-1)*(sk-2)/2;
                    break;
                }
                else{
                    if(a==c){count--;}
                    else{count-=2;}
                    c++;a--;
                }
            }
        }
        cout<<count<<endl;

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

