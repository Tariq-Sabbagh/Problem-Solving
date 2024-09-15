#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
int x;
cin>>x;
while(x--){
    int n;
    cin>>n;
    vector <ll> b(n);
    vector<ll>a;
    for (int i = 0; i < b.size(); i++)
    {
        cin>>b.at(i);
        
    }
    a.push_back(b[0]);
     for (int i = 1; i < b.size(); i++){
        if(b[i-1]<= b[i]){
            a.push_back(b[i]);
        }
        else{
            a.push_back(1);
            a.push_back(b[i]);   
        }
     }
     cout<<a.size()<<endl;
      for (int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
      }
      cout<<endl;
    
    

}
return 0;
}