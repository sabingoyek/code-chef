#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T, D, N, tmp;

	scanf("%d", &T);
	
	while(T--){
		int tmp;
		scanf("%d", &tmp);
		if(tmp >= 2000)
			printf("1\n");
		else if(tmp >= 1600 && tmp < 2000)
			printf("2\n");
		else
			printf("3\n");
	}
	return 0;
}

