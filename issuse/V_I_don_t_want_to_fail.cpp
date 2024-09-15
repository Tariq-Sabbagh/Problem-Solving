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
    int n;
    cin>>n;
    int arr[n],mx=-1,SecondMax=-1,mn=INT_MAX;
    REP(i,0,n){
        cin>>arr[i];
        mx=max(mx,arr[i]);
      mn=min(arr[i],mn);

    }
    REP(i,0,n){
          if(SecondMax<arr[i] && arr[i]!=mx){
        SecondMax=arr[i];
       // cerr<<SecondMax<<endl;
      }
    }
    // sort(arr,arr+n);
    // int sum=arr[n-2]-arr[0];
    if((SecondMax-mn)%2==0){
        cout<<"YES";
    }
    else
    cout<<"NO";
       
}
int main(){
    int t=1;
    //cin>>t;
    while(t--)
    solve();
    return 0;
}