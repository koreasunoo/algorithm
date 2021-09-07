#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int main(){
	int a, b;
	cin>>a;
	vector<int> v(a);
	for(int i= 0 ;i<a;  i++){
		cin>> v.at(i);
	}
	cin>>b;
	sort(v.begin(), v.end());
	int l = 0, r = a-1,count =0, sum;
	while(1){
		if(l>=r){
			break;
		}
		sum = v.at(l) + v.at(r);
		if(sum==b){
			count++;
			l++;
			r--;
		}
		else if(sum>b){
			r--;
		}
		else{
			l++;
		}
	}
	cout<<count;
	return 0;
}
