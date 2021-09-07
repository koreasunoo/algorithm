#include <bits/stdc++.h>


using namespace std;

int f_0[45];
int f_1[45];


int fibo_0(int n);
int fibo_1(int n);
	

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for(int i = 2; i<45;i++){
		f_0[i] = 0;
		f_1[i] = 0;
	}
	f_0[0] = 1; f_1[1] = 0; f_0[1]=0; f_1[1]=1;

	int T;
	cin>>T;

	for(int i= 0; i<T; i++){
		int x; 
		cin>>x;
		if(x>=2){
			cout<<fibo_0(x)<<" "<<fibo_1(x)<<endl;
		}
		else{
			cout<<f_0[x]<<" "<<f_1[x]<<endl;
		}
	}
	return 0;
	
}
int fibo_0(int n){
	
	int ret;
	if(n==0) return 1;
	if(n==1) return 0;
	if(f_0[n]==0){
		f_0[n] = fibo_0(n-1) + fibo_0(n-2);	
	}

	ret = f_0[n];

	return ret;

	
}
int fibo_1(int n){
	int ret;
	if(n==0) return 0;
	if(n==1) return 1;
	if(f_1[n]==0){
		f_1[n] = fibo_1(n-1) + fibo_1(n-2);
	}
	ret = f_1[n];
	return ret;
}
