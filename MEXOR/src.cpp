#include <bits/stdc++.h>

using namespace std;

int numBits(int n){
	int ans = 0;
	while(n != 0){
		n /= 2;
		ans++;
	}
	return ans;
}

int main(){
	int T;

	cin >> T;

	int X, n;
	while(T--){
		cin >> X;
		if( X == 0){
			cout << "1\n";
		} else if( X == 1 ){
			cout << "2\n";
		} else{
			n = numBits(X);
			if( ( (1 << n) - 1 ) == X ){ // x == (1<< i)-1
				cout << X+1 << "\n";
			} else{
				int ans = (1 << (n-1));
				cout << ans << "\n";
			}
		}
	}

	return 0;
}
