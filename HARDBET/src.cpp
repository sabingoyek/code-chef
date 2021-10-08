#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	scanf("%d", &T);
	
	while(T--){
	    vector<int> v;
	    int tmp;
	    for(int i = 0; i< 3; i++){
	        scanf("%d", &tmp);
	        v.push_back(tmp);
	    }
	    int mini = *min_element(v.begin(), v.end());
	    if(v[1] == mini)
	        cout << "Bob\n";
	   else if(v[2] == mini)
	        cout << "Alice\n";
	   else
	    cout << "Draw\n";
	    
	}
	return 0;
}
