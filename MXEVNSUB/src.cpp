#include <bits/stdc++.h>

using namespace std;

int main(){
int N, T, i, sum;

scanf("%d", &T);

while(T--){
	int ans = 0;
	scanf("%d", &N);
	for( i = 1; i <= N; i++){
		sum = (N-i+1) * (i+N)/2;
		if(sum %2 == 0){
			break;
		}
	}
	if(sum %2 == 0){
		ans = N-i+1;
	    printf("%d\n", ans);
	}
	else
		printf("0\n");
}

	return 0;
}
