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
    int n;cin>>n;
    ll sum=0,j=1,k=(n-1)/2;
    for(int i=1;i<=k;i++){
        sum=sum+pow(i,2)*8;
        
    }
    cout<<sum<<endl;

    
       
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
