#include <iostream>
using namespace std;

int numBits(int N){
    int i = 0;
    while( (1 << i) <= N)
        i++;
    return i;
}

int lsb(int N){
    int n = numBits(N);
    int lastO = N - (1 << (n-1)) +1;
    int lastZ = (1 << (n-1)) - 1;
    
    if(lastZ <= lastO)
        return lastO;
    else{
        int x = lsb((1 << (n-1)) - 1);
        if(lastO > x)
            return lastO;
        else
            return x;
    }
}

int main() {
	// your code goes here
	int T, N;
	
	cin >> T;
	while(T--){
	    cin >> N;
	    cout << lsb(N) << "\n";
	}
	return 0;
}
