#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	string N;
	scanf("%d", &T);
	while(T--){
		cin >> N;
	  //scanf("%s", &N);
	  int first = 0, last = N.size()-1;
	  printf("%d\n", N[0]-48 + N[last]-48);
	}
	return 0;
}
