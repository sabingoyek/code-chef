#include <iostream>
using namespace std;
long long int fact(int n){
    long long int ans = 1;
    for(int i = 1; i<=n; i++){
        ans = (long long)ans*i;
    }
    return ans;
}

int main() {
	// your code goes here
	int T,n;
	scanf("%d", &T);
	while(T--){
	    scanf("%d", &n);
	    printf("%lld\n", fact(n));
	}
	return 0;
}

