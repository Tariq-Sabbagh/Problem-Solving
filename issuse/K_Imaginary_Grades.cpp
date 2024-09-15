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
    int n;cin>>n;
    ll a[n],b[n],z,mx=INT_MIN,sum=0;
    REP(i,0,n){
        cin>>a[i];
    
    }
    REP(i,0,n){
        cin>>b[i];
        z=b[i]-a[i];
        sum+=z;
        mx=max(mx,z);
 }
 cout<<sum-mx;
       
}
int main(){
    int t=1;
    //cin>>t;
    while(t--)
    solve();
    return 0;
}