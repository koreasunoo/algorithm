#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, M;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin>>v[i];
    sort(v.begin(), v.end());
    cin >> M;
    for (int i = 0; i < M; i++) {
        int K;
        cin >> K;
        auto upper = upper_bound(v.begin(), v.end(), K);
        auto lower = lower_bound(v.begin(), v.end(), K);
       	int answer = upper - lower;
		cout<<answer<<" ";
    }
}
