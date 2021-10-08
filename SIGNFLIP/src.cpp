#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	scanf("%d", &T);
	
	while(T){
		int ans = 0, N, K;
		scanf("%d %d", &N, &K);
		vector<int> A;

		int tmp;
		for(int i = 0; i < N; i++){
			scanf("%d", &tmp);
			A.push_back(tmp);
		}
		sort(A.begin(), A.end());
		for(int i = 0; i < K; i++){
			if(A[i] < 0)
				A[i] = -A[i];
		}
		sort(A.begin(), A.end());
		for(int i = N-1; i >=0; i--){
			if(A[i] < 0)
				break;
			else{
				ans += A[i];
			}
		}
		printf("%d\n", ans);

		T--;
	}
	return 0;
}
