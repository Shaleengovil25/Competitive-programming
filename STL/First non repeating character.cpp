//Time O(n) Space O(n)
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	char input;
	vector<char> v;
	while(cin >> input){
	    v.push_back(input);
	}
	map<char,int> m;
	for(int i=0;i<v.size();i++){
	    m[v[i]]++;
	}
	map<char,int>::iterator it;
	int flag = 0;
	for(it=m.begin();it!=m.end();it++){
	    if(it->second == 1){
	        cout << it->first;
	        flag = 1;
	        break;
	    }
	}
	if(flag == 0){
	    cout << v[0];
	}
	return 0;
}


SAMPLE INPUT 1:
bbaaccde
SAMPLE OUTPUT 1: give first non repeating char
d 

SAMPLE INPUT 2:
bbaacc
SAMPLE OUTPUT 2: if no char in non repeating give first element of string.
b

