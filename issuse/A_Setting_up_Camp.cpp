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
    ll a,b,c,tents=0;cin>>a>>b>>c;
   
        ll m=b%3;
        if(m==1){
            if(c>=2){
                b=b+2;
                c=c-2;
                 tents=a+ (b/3) +((c+2)/3);
            }
             }
             else if(m==2){
                if(c>=1){
                    b=b+1;
                    c=c-1;
                     tents=a+ (b/3) +((c+2)/3);
                }
                
             }
    if(b%3==0){
        tents=a+ (b/3) +((c+2)/3);
    }
    else{
        tents=-1;
    }

           
    
    cout<<tents<<endl;
       
}
int main(){
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}