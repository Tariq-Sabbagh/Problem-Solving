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
    ll n;cin>>n;
      ll exponent = 0;
      while (n % 3 == 0) {
        exponent++;
        n /= 3;
    }
    while (n % 2 == 0) {
        exponent++;
        n /= 2;
    }
    if(exponent%2==0){
        cout<<"Second"<<endl;
    }
    else
    cout<<"First"<<endl;
    

       
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}