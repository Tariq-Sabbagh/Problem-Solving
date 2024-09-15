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
    double xs, ys, xd, yd, x1, y1, x2, y2;
    cin >> xs >> ys >> xd >> yd;
    cin >> x1 >> y1 >> x2 >> y2;
    double start_to_First=sqrt(pow(xs-x1,2)+pow(ys-y1,2));
    double start_to_Second=sqrt(pow(xs-x2,2)+pow(ys-y2,2));
    double First_to_end=sqrt(pow(xd-x1,2)+pow(yd-y1,2));
    double second_to_end=sqrt(pow(xd-x2,2)+pow(yd-y2,2));
    cout<<fixed<<setprecision(6)<<min(start_to_First+First_to_end,start_to_Second+second_to_end);



       
}
int main(){
    solve();
    return 0;
}