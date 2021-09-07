#include <bits/stdc++.h>
#include <vector>

using namespace std;
bool era[9999];

int main(){
	for(int i = 1; i<9999; i++){
		era[i] = true;
	}
	era[1] = false;
	for(int i = 2; i<=sqrt(9999);i++){
		if(era[i]){
			for(int j = 2*i; j<9999; j+=i){
				era[j] = false;
			}
		}
	}

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin>>t;
	for(int i= 0; i<t; i++){
		int n;
		cin>>n;
		int l = n/2, r= n/2;
		while(1){
			if(era[l] == true and era[r] == true){
				break;
			}
			l--; r++;
		}
		cout<<l<<" "<<r<<endl;

	}

}
