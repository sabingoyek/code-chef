#include <bits/stdc++.h>

using namespace std;

int main(){
int A, B, A1, B1, A2, B2, T;

scanf("%d", &T);

while(T--){
	scanf("%d %d %d %d %d %d", &A, &B, &A1, &B1, &A2, &B2);
	if(((A1 == A) && (B1 == B)) || ((A1 == B) && (B1 == A)))
		printf("1\n");

	else if(((A2 == A) && (B2 == B)) || ((A2 == B) && (B2 == A)))
		printf("2\n");
	else
		printf("0\n");
}

	return 0;
}
