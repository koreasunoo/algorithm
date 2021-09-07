#include <bits/stdc++.h>
using namespace std;
int arr[11];
int factorial(int n){
	if(arr[n]) return arr[n];
	else{
		arr[n] = factorial(n-1) * n;
		return arr[n];
	}
}
int main(){
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;
	int n, k;
	cin>>n>>k;
	cout<<factorial(n)/(factorial(k) * factorial(n-k));
}
