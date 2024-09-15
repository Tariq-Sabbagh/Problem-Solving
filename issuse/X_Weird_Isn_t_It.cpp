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
        string s;
        cin>>s;
        ll count=0,sum;
        int n=s.size();
        while(n>1){
         sum=0;
         count++;
        REP(i,0,n){
            sum=sum+(int(s[i])-48);
        }
        s=to_string(sum);
        //cerr<<m;
        n=s.size();}

         cout<<s<<" "<<count<<endl;}
        
    
int main(){
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}