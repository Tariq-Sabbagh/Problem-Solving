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
void minimumpas(int n,int m,vector<int>q){
    int counter=0;
    while(n--){
        counter+=q[0];
        q[0]--;
        if(q[0]==0){
            q.erase(q.begin());
        }
        
    }
    cout<<counter<<" ";



}
void maximumpas(int n,int m,vector<int>q){
    int count=0;
    while(n--){
         if(q.size()>1){
            sort(q.begin(),q.end());
        }
        count+=q[m-1];
        q[m-1]--;
        if(q[m-1]==0){
            q.erase(q.end());
            m--;
        }
       
            
        }
    cout<<count<<" ";



}
void solve(){
    int n,m;cin>>n>>m;
    vector<int> seat;
    REP(i,0,m){
        int num;cin>>num;
        seat.push_back(num);
         }
    //sort(seat.begin(),seat.end(),greater<int>());
    sort(seat.begin(),seat.end());
    maximumpas(n,m,seat);
    minimumpas(n,m,seat);

    
       
}
int main(){
    Fast;
    int t=1;
    //cin>>t;
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
