#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//int max and min are already defined
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef pair<int,int> pi;
int32_t main(){
    int n;
    cin>>n;
    for(int i=1;i<n+1;i++){
        int tester=8;
        if(i==1){cout<<0<<endl;}
        else if(i==2){cout<<6<<endl;}
        else if(i==3){cout<<28<<endl;}
        else{
            int j = i*i*(i*i-1)/2 - (tester*(i-2))*((i-2)+1)/2 ;
            cout<<j<<endl;
        }
    }  
}
// 1 2 8 24 48 80 120
// 1 3 6 10 15


// Now, we just need to find the total number of 2 X 3 and 3 X 2 blocks in a K X K chessboard. In a K X K chessboard, 
// the 2*3 blocks can be arranged in (K-1) rows (starting from the first row till the (K-1)-th row), and there are (K-2) ways to position them in columns
//  (starting from the first column till the (K-2)-th column) which gives us (K-1)*(K-2) ways to place a 2 X 3 block in a K X K chessboard. 
// Similarly, we can place a 3 X 2 block in (K – 1) * (K – 2) ways.

// So, the total number of ways two knights can attack each other in a K X K chessboard will be sum of 2 * number of 2 X 3 blocks and 2 * number of 3 X 2 blocks
// , which is 4 * (K – 1) * (K – 2). It is every important to note that no 2 ways of attacking are same in the derived formula