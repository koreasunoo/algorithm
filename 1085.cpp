#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int min;
	
	int x, y, w, h;
	cin>>x>>y>>w>>h;

	min = x;
	if(min>w-x) min = w-x;
	if(min>y) min =y;
	if(min>h-y) min = h-y;

	cout<<min<<endl;
	
}
