#include <bits/stdc++.h>

using namespace std;

int main(){
	int X;
	float Y;

	cin >> X >> Y;

	if((X % 5 == 0) && (X <= (Y-0.5))){
		cout << Y-X-0.5 ;
	} else{
		printf("%.2f", Y);
		//cout << fixed << setprecision(2) << Y;
	}


	return 0;
}
