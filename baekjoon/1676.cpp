#include <bits/stdc++.h>
using namespace std;
int arr[501];
int fac(int n){
	if(arr[n]){
		return arr[n];
	}
	int count = 0,tmp =  n;
	while(1){
		if(tmp%5!=0){
			break;
		}
		else{
			tmp = tmp/5;
			count++;
		}
	}
	arr[n] = fac(n-1) + count;
	return arr[n];
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin>>N;
	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 0;
	
	cout<<fac(N)<<"\n";
	
}
