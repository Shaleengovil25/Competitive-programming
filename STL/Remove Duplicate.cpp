//Time O(n) Space O(n)
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> v;
	int input;
	while(cin >> input){
	    v.push_back(input);
	}
	vector<int> o;
	set<int> s;
	for(int i=0;i<v.size();i++){
	    if(s.find(v[i]) == s.end()){
	        s.insert(v[i]);
	        o.push_back(v[i]);
	    }
	}
	for(int i=0;i<o.size();i++){
	    cout << o[i] << " ";
	}
	return 0;
}

INPUT:
8 5 1 5 3 9 5 4 3 2 56 8

OUTPUT:
8 5 1 3 9 4 2 56  (relative order is maintained)

//Time O(n) Space O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> v;
	int input;
	while(cin >> input){
	    v.push_back(input);
	}
	vector<int> o;
	sort(v.begin(),v.end());
	o.push_back(v[0]);
	for(int i=1;i<v.size();i++){
	    if(v[i] != v[i-1]){
	        o.push_back(v[i]);
	    }
	}
	for(int i=0;i<o.size();i++){
	    cout << o[i] << " ";
	}
	return 0;
}

INPUT:
8 5 1 5 3 9 5 4 3 2 56 8

OUTPUT:
1 2 3 4 5 8 9 56 (relative order is compromised)
