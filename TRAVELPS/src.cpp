#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	
	scanf("%d", &T);
	
	while(T--){
	    int ans = 0, A, B, N;
	    string s;
	    scanf("%d %d %d", &N, &A, &B);
	    cin >> s;
	    //cout << s;
	    for(int i = 0; i < N; i++){
	        if(s[i] == '0'){
				//printf("i = %d ans = %c %s")
	            ans += A;
			} else{
	            ans += B;
			}
	    }
	    printf("%d\n", ans);
	    
	}
	return 0;
}
