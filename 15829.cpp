#include <bits/stdc++.h>
using namespace std;
const int  MOD = 1234567891;
const int  MUL = 31;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	long long int sum = 0;
	cin>>N;
	string M;
	cin>>M;
	long long R = 1;
	
	for(int i= 0; i<N; i++){
		long long int in;
		in = ((M[i]-96)*R) % MOD;
		sum = (sum + ((M[i]-96)*R)) % MOD;
		R = (R * MUL) % MOD;
	}
	cout<<sum;
}
