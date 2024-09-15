#include<bits/stdc++.h>

typedef long long ll;


#define vi vector <int> 
#define pi pair <int,int> 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)

using namespace std;


int findRepeatingElement(pi arr[], int low, int high) 
{ 
	// low = 0 , high = n-1; 
	if (low > high) 
		return -1; 

	int mid = (low + high) / 2; 

	if (arr[mid].F != mid + 1) 
	{ 
		if (mid > 0 && arr[mid].F==arr[mid-1].F) 
			return mid; 

		
		return findRepeatingElement(arr, low, mid-1); 
	} 

	return findRepeatingElement(arr, mid+1, high); 
} 

void solve(){
    int n,q,mx=0,f=0;
    cin>>n>>q;
    int ar[n];
    pi x[q];
    REP(i,0,n){
        cin>>ar[i];
        if(mx<ar[i]){
        max(mx,ar[i]);
        f=i;}
    }
    
    REP(i,0,q){
        int l,r;
        cin>>l>>r;
        x[i]=MP(l,r);
    }
    int index=findRepeatingElement(x,0,q-1);
    if(index>0){
    int z=ar[index];
    ar[index]=mx;
    ar[f]=z;}
    int sum=0;
    REP(i,0,q){
        while(x[i].F<=x[i].S){
            sum=sum+ar[x[i].F];
            x[i].F++;
        }
    }
    cout<<sum<<endl;

    

       
}
int main(){
    solve();
    return 0;
}