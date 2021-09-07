#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
	int N, sum= 0;
	cin>>N;
	vector<int> v;
	vector<int> res(8001);
	for(int i= 0; i<N; i++){
		int x;
		cin>> x;
		v.push_back(x);
		res[x+4000]++;
		sum+= x;
	}
	sort(v.begin(), v.end());
	int mid = ((N+1)/2) - 1, result_2 = v[mid];
	int df = v[N-1] - v[0], max_count = 0, max = -1000000000;
	for(int i = 0; i<8001; i++){
		if(max<res[i]) max= res[i];
	}
	int index;
	for(int i = 0; i<8001; i++){
		if(res[i] ==max) {
			max_count++;
			index= i-4000;
		}
		
		if(max_count==2){
			index = i-4000;
			break;
		}
		
		
		
	}
	cout<<round(sum/(double)N)<<"\n";
	cout<<result_2<<"\n";
	cout<<index<<"\n";
	cout<<df<<endl;
}
