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
    int n,j=1;cin>>n;
    vector <int> vec;
    //stack<int> st;
    map<int,int> mp;
    REP(i,0,n){
        int num;cin>>num;
        vec.PB(num);
        mp[num]++;
    }
    
    REP(i,0,n){
        if(mp[vec[i]]>1 || vec[i]>n){
            for(int k=j;k<=n;k++){
                if(mp[k]==0){
                    cout<<k<<" ";
                    j=k+1;
                    break;

                }

            }
            mp[vec[i]]--;
            
        }
        else{
            cout<<vec[i]<<" ";
        }
    }
    // REP(i,0,n){
    //     cout<<vec[i]<<" ";
    // }


    
       
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
