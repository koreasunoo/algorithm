#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int N;
    cin>>N;
    vector<vector<int>> v(N, vector<int>(2));
    for(int i = 0; i < N; i++){
        cin>>v[i][0];
        cin>>v[i][1];
    }
    sort(v.begin(),v.end());

    for(int i = 0; i < v.size(); i++){
        cout<<v[i][0]<<" "<<v[i][1]<<"\n";
    }

}
