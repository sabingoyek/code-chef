#include <bits/stdc++.h>

using namespace std;

int main(){
int N, T, K;

scanf("%d", &T);

while(T--){
	vector<int> v;
	int ans = 0, tmp, maxi;

	scanf("%d %d", &N, &K);

	for(int i = 1; i <= N; i++){
		scanf("%d", &tmp);
		v.push_back(tmp);
	}
    
	maxi = *(max_element(v.begin(), v.end()));
	/*for(int i = 0; i < (v.size()-K+1); i++){
		if(v[i+K-1] == maxi)
			ans += N-i-K+1;
	}*/

	for(int i = K; i <= N; i++){
		if(v[i] == maxi){
			ans += N-i+1;
		}
	}

	printf("%d\n", ans);
	
}
	return 0;
}
