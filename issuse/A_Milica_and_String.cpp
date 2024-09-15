#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    int const maxn = 2e5;
    map<int,int> fr;
    // vector<int> fr(maxn,0);
    int n;cin >> n;
    vector<int> a(n);
    // fr[9]++;
    for(int i = 0;i < n;i++)cin >> a[i];
    for(int i = 0;i < n;i++){
        fr[a[i]]++;
    }
    for(auto p : fr){
        cout << p.first << endl;
        cerr << p.second;
        cerr << endl << endl;
    }

}