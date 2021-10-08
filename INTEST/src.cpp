#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, t, ans = 0;

	scanf("%d %d", &n, &k);

	while(n--){
	   scanf("%d", &t);
	   if((t % k) == 0)
		   ans++;
	}
	printf("%d", ans);

	return 0;
}
