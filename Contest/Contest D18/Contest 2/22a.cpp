#include<bits/stdc++.h>
using namespace std;
int a[100][100], n, k=0, ok=0;
string kq;
void xuat(int k){
	for(int i=0; i<k; i++){
		cout << kq[i];
	}
	cout << " ";
}
void quaylui(int i, int j, int k){
	if(i==n-1 && j==n-1){
		ok = 1;
		xuat(k);
		return;
	}
	if(i<n && a[i+1][j]==1){
		kq[k] = 'D';
		quaylui(i+1,j,k+1);
	}
	if(i<n && a[i][j+1]==1){
		kq[k] = 'R';
		quaylui(i,j+1,k+1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}
		if(a[0][0]==0 || a[n-1][n-1]==0){
			cout << "-1" << endl;
		}
		else{
			quaylui(0,0,k);
			if(ok==0){
				cout << "-1";
			}
			cout << endl;
		}
	}
}
