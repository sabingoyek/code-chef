#include <bits/stdc++.h>

using namespace std;

int main(){
int T;

scanf("%d", &T);

while(T--){
	deque<int> v;
	int tmp, N;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &tmp);
		if(tmp % 2 == 0){
			v.push_back(tmp);
		} else{
			v.push_front(tmp);
		}
	}

	if((v[0] % 2) != (v[N-1] % 2)){
		for(int i = 0; i < v.size(); i++){
			printf("%d ", v[i]);
		}
		printf("\n");
	} else{
		printf("-1\n");
	}	
}

return 0;
}
