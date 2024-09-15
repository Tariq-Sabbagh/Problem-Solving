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
    string s;cin>>s;
    int x=0,y=0;
    bool t=false;
    REP(i,0,n){
        if(s[i]=='U'){
            y++;
        }
        else if(s[i]=='D'){
            y--;
        }
        else if(s[i]=='L'){
            x--;
        }
        else{
            x++;
        }
        if(x==1 &&y==1){
            t=true;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(!t){
        cout<<"NO"<<endl;
    }

    
   
       
}
int main(){
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}