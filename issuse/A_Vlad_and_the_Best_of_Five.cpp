#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    for(int i=0;i<t;i++){
        cin>>s;
        int countA=0,countB=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='A'){
                countA++;
            }
            else
            countB++;
        }
        if(countA>countB){
            cout<<'A'<<endl;
        }
        else
        cout<<'B'<<endl;

    }
  
return 0;
}