#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> v;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a;
	cin>>a;

	while(1){
		if(a==1) break;
		for(int i = 2; i<=a; i++){ /*2 ���� ũ�ų� ���� a���� ���ų� ���� ���߿� a�� �������� ��������
									0�� �Ǵ� �� ã��*/
			if(i==a){
				v.push_back(i);
				a = a/i;
				break;
			}
			else if(a==1){
				break;
			}
			else if(a%i==0){
				v.push_back(i);
				a = a/i;
				break;
			}
		}

	}
	for(int i = 0; i<v.size(); i++){
		cout<<v.at(i)<<endl;
	}

}
