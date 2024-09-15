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
    int a,b,count=0;cin>>a;
    for(int i=0;i<3;i++){
        cin>>b;
         if(a<b){
        count++;
    }
    }
    cout<<count<<endl;
   
       
}
int main(){
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}