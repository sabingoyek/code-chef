#include <bits/stdc++.h>

using namespace std;

int main(){
int T;

scanf("%d", &T);

while(T--){
	long long int L, R;
	scanf("%lld %lld", &L, &R);
	long long int first, last, ans = 0;
	
	first = L; last = R;
	

	/*if( L < 3 && R < 3){
		printf("0\n");
		continue;
	}*/

	while(first % 3 != 0 && first < last){
		first++;
	}

	while(last % 3 != 0 && last > first){
		last--;
	}
	cout << "L: " << L << " R: " << R << " First: " << first << " last: " << last << "\n"; 

	if( first == last && (last % 3 != 0)){
		printf("0\n");
		continue;
	}
	ans = (last-first+1)/3 + 1;
	/*while(first <= last){
		ans++;
		first += 3;
	}*/
	printf("%lld\n", ans);
}

	return 0;
}
