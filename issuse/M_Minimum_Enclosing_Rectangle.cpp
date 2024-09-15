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
     double mnX=1e10,  mnY=1e10, mxX=-1e10, mxY=-1e10;
    REP(i,0,n){
        double l,r;
        cin>>l>>r;
        mnX=min(l,mnX);
        mxX=max(l,mxX);
        mxY=max(r,mxY);
        mnY=min(r,mnY);

    }
    double X=mxX-mnX;
    double Y=mxY-mnY;
    double sum=X*Y;
    printf("% .6f",sum);
    //  cout <<fixed << setprecision(6)


       
}
int main(){
    solve();
    return 0;
}