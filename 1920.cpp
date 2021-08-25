#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int binarySearch(int low, int high, int target){
	if (low > high) return 0;
	else{
        int mid = (low + high) / 2;
        if (v[mid] == target) return 1;
        else if (v[mid] > target) return binarySearch(low, mid - 1, target);
		else return binarySearch(mid + 1, high, target);
    }
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin>>N;
	for(int i = 0; i<N; i++){
		int x;
		cin>>x;
		v.emplace_back(x);
	}
	sort(v.begin(), v.end());
	int M;
	cin>>M;
	for(int i = 0; i<M; i++){
		int x;
		cin>>x;
		cout<<binarySearch(0, N-1, x)<<"\n";
	}
}
