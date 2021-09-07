#include <bits/stdc++.h>
#include <vector>

using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, i;
	cin>>n;
	vector<int> v(1000001);
	v.at(2) = 1;
	v.at(3) = 1;
	for(i =4; i<=n; i++){
		v.at(i) = v.at(i-1) + 1;
		if(i%3 == 0) v.at(i) = min(v.at(i), v.at(i/3)+ 1);
		if(i%2==0) v.at(i) = min(v.at(i), v.at(i/2)+ 1);
		
	}
	cout<<v.at(n);
	

}
