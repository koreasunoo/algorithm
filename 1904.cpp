#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<int> v(1000002);

	int n;
	cin>>n;
	v.at(1) = 1;
	v.at(2) = 2;
	v.at(3) = 3;
	if(n<=3) cout<<n<<endl;
	else{
		for(int i = 4; i<=n; i++){
			if(v.at(i) == 0){
				v.at(i) = (v.at(i-1) + v.at(i-2))%15746;
			}
		}
		cout<<v.at(n);
	}
}
