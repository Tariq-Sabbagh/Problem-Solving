#include<bits/stdc++.h>

typedef long long ll;


#define vi vector <int> 
#define pi pair <int,int> 
// #define ss set <string>
// #define si set <int> ::iterator 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
#define Fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


using namespace std;

void solve(){
    int n,k,count=1,mx=1;cin>>n>>k;
    vector <int> vec;
    REP(i,0,n){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    // REP(i,0,n){
    //     cerr<<vec[i]<<" ";
    // }
    sort(vec.begin(),vec.end());
    REP(i,1,n){
        if(vec[i]-vec[i-1]<=k){
            count++;
        if(count>=mx){
            mx=count;
        }}
        else{
            count=1;
        }
    }
    cout<<n-mx<<endl;
       
}
int main(){
    Fast;
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}



/*
 ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢦⢛⡿⠃⠉⠉⠉⠐⡂⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠊⢁⣿⠷⠶⠶⠶⠶⢶⣽⣦⡱⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘⣠⣐⣌⣳⣼⣶⣶⣶⣤⣌⡱⢮⡷⠣⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢰⣿⣦⣤⣀⠄⢸⣯⢋⣹⣿⣿⠋⣿⠹⣿⣿⣿⣿⣷⣴⣌⣿⣦⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣠⣿⢯⣟⡾⣿⢴⡿⠟⠨⣽⣿⡟⠀⠻⠀⠙⢿⡘⡟⣿⣿⣯⡤⢛⣧⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⣠⣶⡿⣿⣽⣻⢾⣻⣽⣤⡱⣌⡼⢻⢿⡹⢢⣤⠀⠰⠊⡝⠇⢻⣟⣿⣟⠘⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⢰⣿⣳⣟⣷⣻⣿⣿⡛⠛⠉⠁⠈⠛⠯⣘⢵⠒⠊⡀⠀⠑⢶⠇⡾⣿⢛⢠⣬⠞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠙⢷⣻⣟⣿⣻⣿⡿⣶⣤⣀⣀⣀⣀⠀⠈⠓⢕⢄⣂⠭⣋⣶⠛⠓⠊⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠈⠛⠾⣽⢯⣿⢿⣳⣿⣻⣟⣿⢷⣦⣀⣀⠝⠒⠬⠟⠉⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠉⠻⢿⣿⣻⣷⣯⣿⣿⡏⠙⠪⡀⣀⣜⣀⣀⠈⣿⣖⣤⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣷⣿⡾⣟⣷⠀⠀⡠⠃⠀⣠⣴⣿⢿⡿⣟⡿⣟⡿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣽⢿⣿⠩⢴⢰⣄⢴⡾⣿⡽⣾⢯⡿⣽⣿⣻⡽⣯⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣸⣀⡈⡏⣶⣶⠰⣿⣹⣏⣿⣹⣷⣏⣷⣿⣹⢿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣜⣿⣇⣻⣉⣹⣏⢱⠲⡯⣿⢷⣻⣞⣷⣿⣿⣿⣻⣟⣯⣷⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⣿⡗⣼⢩⠟⢹⠙⢯⢷⠵⣿⣯⡷⣟⣾⣻⣿⡏⢻⡾⣽⢾⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣷⣿⣷⡱⣋⡠⢾⢀⠈⠈⢾⣻⡷⣿⣟⣷⣻⣞⣇⠀⢻⣯⡿⣞⣷⡀⢀⣀⡀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⡏⠆⠀⠀⡇⠀⠈⠀⠈⡳⢿⣯⢿⣾⣷⣻⣿⣴⣿⣿⣻⢿⣾⣻⣿⣟⣿⠄⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⡇⠃⠒⠒⡉⠒⠄⠄⠀⠱⡌⡿⢯⢿⣿⣷⣯⢿⣻⣿⣿⢯⣷⣻⣷⣿⣞⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⢯⣿⣿⡇⢠⠀⠀⡇⠀⠀⠀⣘⠀⠈⠣⢤⣿⣿⣻⣿⣿⣳⣯⢿⣟⡾⣷⢿⣿⣟⣿⠷⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠘⠻⣿⡟⠻⡇⠘⠀⠀⠃⣀⣀⣀⣿⡠⡤⡠⣀⡝⠛⠋⠸⣿⣿⣽⣿⢿⣻⣽⣯⣿⡿⠟⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠓⠉⢉⣀⠀⢀⠐⠶⠒⡆⠘⡴⠡⡈⡑⠀⠀⠀⠀⠀⠻⣯⣿⡛⡿⢿⠉⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣞⠩⠁⠒⠈⣀⣤⣀⠒⠘⢹⠀⢃⢆⢣⢁⢁⠀⠀⠀⠀⠀⠀⠀⠩⠒⠸⡄⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠠⣔⣄⣒⣁⣀⣀⣉⣉⣉⡃⠀⠸⠈⠎⠞⡎⢆⠀⠀⠀⠀⠀⠀⠈⠀⠀⡣⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢨⣿⣟⢿⣻⣿⣿⣿⣿⢿⣟⣿⠀⠀⢣⠈⢣⠈⠢⠕⣶⡢⠤⠤⢄⠐⠀⠀⠈⡆⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣟⡾⣯⣿⣽⣷⣿⣯⣿⣾⣿⣧⡀⠀⡓⢄⠙⢤⢀⠀⠈⠈⠰⣧⡄⠀⠀⠀⠐⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⢯⣟⡽⣞⣳⣿⣿⣾⣷⣯⣟⢿⡿⣦⣌⡀⠐⠒⠓⠪⠤⢐⡠⢹⣯⣤⢤⣴⠞⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣻⠾⣽⣿⡿⣿⣿⣷⢯⣟⣿⣻⢾⣽⣻⢿⣿⣿⡇⠐⢆⠒⢫⡁⠒⠴⣤⡀⠈⠀⠤⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣽⣻⣽⡳⣟⣿⣿⣿⣿⢮⡷⢯⣟⡾⣭⢿⣽⣻⣧⠀⠀⢱⢸⠈⠢⡀⡈⢎⠲⡀⠀⡇
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢾⣳⢯⣶⣻⣽⣿⣿⣿⣿⣯⡟⣟⡾⣽⣫⣟⣶⣻⢾⡄⠀⠀⠹⡀⢀⠜⠀⠈⠲⠏⠉⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⡿⣭⣟⡾⣳⢿⣿⣿⣿⣷⣯⠿⣝⣯⢷⣛⡾⣵⢯⣟⡇⠀⠀⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣳⢯⡽⣯⢿⣽⣿⣿⣿⣯⢿⡽⣞⣯⢿⣹⢯⣟⡾⣽⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡷⣯⠿⣽⣯⣟⣾⣽⣿⣿⠸⡿⣽⣻⡼⣯⣟⣿⣾⡽⣳⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠚⠛⠞⠿⠿⠷⡿⠿⠿⠟⠛⡀⢿⣷⣯⣷⠿⣾⡽⣿⠿⡿⠛⢢⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠒⠀⢌⠤⠤⡠⢤⡤⠀⠓⠊⠀⠈⠦⣢⣀⣀⠤⠠⠤⠴⢍⠛⠚⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠲⣁⠆⡡⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⡑⢌⠢⡹⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠈⠒⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠌⠈⠁⠀⠰⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢁⠀⠀⠀⡐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⡀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢃⠀⠀⠀⡃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠇⠀⣘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠇⠀⠘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠃⠀⣏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠔⠃⠀⠀⢸⢢⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⠀⠀⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢀⣀⢠⣶⣘⣻⣶⣄⠀⠀⠉⠀⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢢⠀⠀⠀⠅⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢠⢮⣻⣻⡊⠛⠋⠉⢙⣿⣷⡦⢆⢲⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣤⣦⣴⣼⡄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠈⠓⠈⠽⠛⠿⡒⠻⠽⠉⠓⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢐⢿⣄⣠⡶⠛⠛⡆⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣘⠈⣿⠁⡄⢄⢠⠰⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢷⡶⠿⣵⡿⠽⠾⢿⠳⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⠂⠊⠌⠈⠁⠖⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/
