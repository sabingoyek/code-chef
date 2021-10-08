#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;

	scanf("%d", &T);

	while(T--){
		int N;
		string S, P;
		
		scanf("%d", &N);
		cin >> S;
		cin >> P;

		int cnt = count(S.begin(), S.end(), '1');
	  
		if(cnt == N || cnt == 0){
			if(S == P){
			  printf("YES\n");
			} else{
				printf("NO\n");
			}
		} else{
			printf("YES\n");
		}
	}

	return 0;
}
