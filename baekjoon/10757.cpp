#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	string A, B;
	cin>>A>>B;
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	while(A.length() < B.length()){
		A += "0";
	}
	
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	cout<<A<<" "<<B;
}
