#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    while(n>1){
        if(n==2){
            cout<<"NO"<<endl;
            break;
        }
        else{
            if(n%2==0){
                n=n/2;
            }
            else{
                cout<<"YES"<<endl;
                break;
            }
        }
    }
    }
return 0;
}