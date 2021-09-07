#include <bits/stdc++.h>
using namespace std;
long long int arr[101] = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, };
long long int P(int n){
	if(arr[n]){
		return arr[n];
	}
	else{
		arr[n] = P(n-2) + P(n-3);
		return arr[n];
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin>>N;
	for(int i= 0 ; i<N; ++i){
		int x;
		cin>>x;
		cout<<P(x)<<"\n";
	}
}
