#include <bits/stdc++.h>

using namespace std;

int main(){
int T;

scanf("%d", &T);

while(T--){
	string S;
	int N, K, ans = -1, kth = 1;

	scanf("%d %d", &N, &K);
	cin >> S;

	// Check if he can make K jump
	
	int jumps = 0, ind;
	for(int i = 1; i < S.size(); i++){
		if(S[i-1] != S[i]){
			jumps++;
		}
	}

	if(jumps >= K){
		for(int i = S.size()-1; i >= 0; i--){
			if((K %2 == 0) && (S[i] == S[0])){
				ans = i+1;
				break;
			} else if((K%2 == 1) && (S[i] != S[0])){
				ans = i+1;
				break;
			}
		}
	}
	printf("%d\n", ans);
}

	return 0;
}
