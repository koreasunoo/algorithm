#include <bits/stdc++.h>
using namespace std;
long long int v[100];
long long int fibo(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	if(!v[n]){
		v[n] = fibo(n-1) + fibo(n-2);
		return v[n];
	}
	else {
		return v[n];
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 	v[0] = 0;
	v[1] = 1;
	int N;
	cin>>N;
	cout<<fibo(N)<<"\n";
}
