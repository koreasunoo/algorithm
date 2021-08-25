#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case){
		unsigned long long int N;
        string a;
        cin>>a>>N;

		vector<string> SN(N+1);
		int set_num = a.size();
		vector<string> v(set_num);

       	for(int i= 0; i<set_num; i++){
			v[i] = a[i];
		}
		int digit, tmp = 1;
		unsigned long long int sum = set_num, multiply = set_num;
		while(1){
			if(N<=sum){
				digit = tmp; 
				break;
			}
			else{

				multiply *= set_num;
				sum += multiply;
				tmp ++;
			}
		}
		//digit은 자리수
		for(unsigned long long i = sum- multiply+1; i<= N; i++){
			 
		}

    }
	return 0;
}
