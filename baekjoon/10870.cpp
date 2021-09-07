#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<int> v(25);

	int n;
	cin>>n;
	n++;
	v.at(1) = 0;
	v.at(2) = 1;
	if(n<=2){
		cout<<v.at(n);
	}
	else{
		for(int i = 3; i<=n; i++){
			v.at(i) = v.at(i-1) + v.at(i-2);
			
		}

		cout<<v.at(n);
	}
}
