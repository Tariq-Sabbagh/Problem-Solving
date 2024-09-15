#include<bits/stdc++.h>

typedef long long ll;


#define vi vector <int> ;
#define pi pair <int,int> ;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)

using namespace std;

void solve(){
    ll n,m,y=1;cin>>n>>m;
    ll arr[n][m];
    REP(i,0,n){
        REP(j,0,m){
            arr[i][j]=y;
            y++;
        }
    }
    ll x1,x2,y1,y2,h,sum=0;
    cin>>x1>>x2>>y1>>y2>>h;
    // arr[y1-1][x1-1]=arr[y1-1][x1-1]-h;
    // arr[y1-1][x2-1]=arr[y1-1][x2-1]-h;
    // arr[y2-1][x1-1]=arr[y2-1][x1-1]-h;
    // arr[y2-1][x2-1]=arr[y2-1][x2-1]-h;
    if(x1>x2){swap(x1,x2);}
    if(y1>y2){swap(y1,y2);}
       REP(i,0,n){
        REP(j,0,m){
            if(i>=x1-1 &&i<x2 &&j>=y1-1&&j<y2){
                arr[i][j]=arr[i][j]-h;
            }
           sum=sum+ arr[i][j];
           //cerr<<arr[i][j]<<" ";
            
        }
   // cerr<<endl;
    }
      cout<<sum<<endl;
       
}
int main(){
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}




// #include <iostream>
// using namespace std;

// int main() {
//     int T;
//     cin >> T; 
//     while (T--) {
//         int N, M, x1, y1, x2, y2, H;
//         cin >> N >> M >> x1 >> x2 >> y1 >> y2 >> H;

        
//         long long totalSum = (long long)N * M * (N * M + 1) / 2;

        
//         long long subRectSum = 0;
//         for (int i = x1; i <= x2; i++) {
//             for (int j = y1; j <= y2; j++) {
//                 subRectSum += ((i - 1) * M + j)-H;
//             }
//         }

       
//       //  long long rectAdjustment = (long long)(x2 - x1 + 1) * (y2 - y1 + 1) * H;

        
//         long long finalSum = totalSum - subRectSum ;

//         cout << finalSum << endl;
//     }
//     return 0;
// }