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


int n, m,a=0,b=0;
vector<vector<int>> array;
 void fill( int cnt) {
    array[a][b] = pow(cnt,2);
    cnt++;
    fill(a+1,b, cnt);
    fill(a,b+1, cnt);
}

void solve(){
    cin>>n>>m;
    fill(2);
       for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
//     REP(i,0,n){
//          int s=t;
//         REP(j,0,m){
//             arr[i][j]=pow(s,2);
//             s++;
// }
// t++;
//     }
//       REP(i,0,n){
//         REP(j,0,m){
//             cout<<arr[i][j]<<" ";
            
// }
//     cout<<endl;
//     }
       
}
int main(){
    int t=1;
    //cin>>t;
    while(t--)
    solve();
    return 0;
}