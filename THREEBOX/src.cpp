#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T, A, B, C, D;
	cin >> T;
	while(T--){
	    int tmp;
	    
	    vector<int> bags, boxes;
	    for(int i = 0; i < 4; i++){
	        cin >> tmp;
	        boxes.push_back(tmp);
	    }
	    
	    
	    bags.push_back(boxes[0]);
	    int i = 0;
	    
	    int n = boxes.size();
	    int D = boxes[n-1];
	    for(int j = 1; j < n-1; j++){
	        if(bags[i]+boxes[j] <= D)
	            bags[i] += boxes[j];
	       else{
	           bags.push_back(boxes[j]);
	           i++;
	       }
	    }
	    cout << bags.size() <<"\n";
	    
	    
	}
	return 0;
}
