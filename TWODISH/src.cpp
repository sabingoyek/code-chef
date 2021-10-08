#include <bits/stdc++.h>

using namespace std;

int main(){
int T;

scanf("%d", &T);

while(T--){
	int A, B, C, N;
	scanf("%d %d %d %d", &N, &A, &B, &C);
	if( B < N ){
		printf("NO\n");
	} else {
		if( A+C >= N ){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}

	return 0;
}
