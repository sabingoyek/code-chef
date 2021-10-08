#include <bits/stdc++.h>

using namespace std;

int main(){
int N, T;

scanf("%d", &T);

while(T--){
	vector<int> v;
	int ans, tmp, max_i_odd, max_i_even, count_i_odd = 0, count_i_even = 0;

	scanf("%d", &N);

	if(N % 2 == 0){
		max_i_odd = N/2;
		max_i_even = N/2;
	} else{
		max_i_odd = N/2 + 1;
		max_i_even = N/2;
	}

	for(int i = 0; i < N; i++){
		scanf("%d", &tmp);
		if(tmp % 2 == 0){
			count_i_odd++;
		} else{
			count_i_even++;
		}

		//if(count_i_odd == max_i_odd || count_i_even == max_i_even){
		//	break;
		//}
	}
	if(count_i_odd > max_i_odd)
		count_i_odd = max_i_odd;
	if(count_i_even > max_i_even)
		count_i_even = max_i_even;

	ans = count_i_odd + count_i_even;

	printf("%d\n", ans);
}

	return 0;
}
