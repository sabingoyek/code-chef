#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	scanf("%d", &T);
	
	while(T--){
		int ans, N, K, S;
		scanf("%d %d %d", &N, &K, &S);
		for(int i = 1; i <= N; i++){
			int ith_odd_number = 2*(i-1)+1;
			//cout << nth_odd_number << " ";
			int remain = S - (K*ith_odd_number);
			 
			if(remain == (N*N - ith_odd_number)){
				ans = ith_odd_number;
				break;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
