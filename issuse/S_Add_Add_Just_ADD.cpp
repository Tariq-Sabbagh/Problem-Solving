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
    ll N ,A,B;
    cin>>N>>A>>B;
    if(A>N || B>N){
        cout<<"NO";
        return;
    }
    if(B>A){
        ll diff=B-A;
        ll solu=B+diff;
        ll c=N-solu;

        if((N-solu)%3==0 && c>=0){
            cout<<"YES";
        }
        else
        cout<<"NO";
 }
 else{
    ll diff2=A-B;
    ll solu2=A+diff2;
    ll c=N-solu2;
    if(c%3==0 && c>=0){
        cout<<"YES";
    }
    else
    cout<<"NO";
 }
       
}
int main(){
    solve();
    return 0;
}