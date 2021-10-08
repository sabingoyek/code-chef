#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T, D, N, tmp;

	scanf("%d", &T);
	
	while(T--){
		float at_risk = 0;
		float not_at_risk = 0;

		scanf("%d %d", &N, &D);
		
		while(N--){
			scanf("%d", &tmp);
			if(tmp <= 9 || tmp >= 80)
				at_risk += 1;
			else
				not_at_risk += 1;
		}

		int ans = ceil(at_risk / D) + ceil(not_at_risk / D);
		printf("%d\n", ans);
	}
	return 0;
}

