//Time O(n) [filling values in map] 
//Space O(n) [Creating map]
#include <iostream>
#include<vector>
#include<map>
#include<iterator>
using namespace std;

int main() {
	// your code goes here
	string input;
	vector<string> v;
	while(cin >> input){
	    v.push_back(input);
	}
	map <string,int> m;
	for(int i=0;i<v.size();i++){
	    m[v[i]]++;
	}
	int flag = 0;
	map<string,int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
	    if(it->second == 1){
	        continue;
	    }
	    else{
	        cout << it->first << " " << it->second << endl; 
	        flag = 1;
	    }
	    
	}
	if(flag == 0){
	    cout << "-1";
	}
	return 0;
}



Sample Input 1:
Abhishek harshit Ayush harshit Ayush Iti Deepak Ayush Iti

Sample Output 1:
harshit 2
Ayush 3
Iti 2

Sample Input 2:
Abhishek Harshit Ayush Iti

Sample Output:
-1
