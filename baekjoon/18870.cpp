#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin>>N;
	vector<int> v(N);
	vector<int> temp;
	for(int i = 0; i<N; i++){
		int x;
		cin>>x;
		v[i] = x;
		temp.emplace_back(x);
	}	

	sort(temp.begin(), temp.end());
	temp.erase(unique(temp.begin(), temp.end()), temp.end());
	for(int i = 0; i<N; i++){
		int ind = lower_bound(temp.begin(), temp.end(), v[i]) - temp.begin();
		cout<<ind<<" ";
	}
	

}
