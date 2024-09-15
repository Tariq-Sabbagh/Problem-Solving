#include <iostream>
#include <vector>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)

// void solve(){
//     int n;cin>>n;
//     int rowSize=2*n;
//     int colSize=2*n;
//     char arr[rowSize][colSize];
//     int row=0;
//     int col=0;
//     char c='#',r='.',z;
//     while(row<rowSize){
//         col=0;
//         while(col<colSize){
//             arr[row][col]=c;
//             arr[row+1][col]=c;
//             arr[row][col+1]=c;
//             arr[row+1][col+1]=c;
//             z=c;
//             c=r;
//             r=z;
//             col+=2;}
//             row+=2;
//     }
//     REP(i,0,rowSize){
//         REP(j,0,colSize){
//             cout<<arr[i][j];
//         }
//         cout<<'\n';
//     }





}
void printCheckerboard(int n) {
   
    for (int i = 0; i < 2 * n; ++i) {
        for (int j = 0; j < 2 * n; ++j) {
            if ((i / 2) % 2 == (j / 2) % 2) {
               cout<<'#';
            } else {
                cout<< '.';
            }
        }
        cout<<endl;
    }
   
}

int main() {
    int t,n;
    cin >> t;
    while (t--) {
        cin>>n;
        printCheckerboard(n);
        
    
    }
    return 0;
}