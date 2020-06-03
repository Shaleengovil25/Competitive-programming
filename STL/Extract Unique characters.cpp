#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<iterator>
using namespace std;


char* uniqueChar(char *str){
    // Write your code here
    map<char,int> m;
    char *s = new char[1000000];
    int j=0;
    
	for(int i=0;i<strlen(str);i++){
	    if(m[str[i]] == 0){  //value for a key is initialized with zero.
	        s[j] = str[i];
	        m[str[i]]++;
            j++;
	        
	    }
	}
    return s;
    delete [] s;

}

int main() {

	char input[1000000];
	cin >> input;
	cout << uniqueChar(input) << endl;
}

//USING CHARACTER VECTORS INSTEAD OF CHARACTER ARRAYS.

#include <iostream>
#include<map>
#include<vector>
#include<iterator>
using namespace std;

int main() {
	// your code goes here
	char input;
	vector<char> v;
	vector<char> o;
	while(cin >> input){
	    v.push_back(input);
	}
	map<char,int> m;
	for(int i=0;i<v.size();i++){
	    if(m[v[i]] == 0){
	        o.push_back(v[i]);
	        m[v[i]]++;
	        
	    }
	}
	for(int i=0;i<o.size();i++){
	    cout << o[i];
	}

	return 0;
}

Sample Input 1 :
ababacd
Sample Output 1 :
abcd

Sample Input 2 :
bcaadc
Sample Output 2 :
bcad

NOTE: Relative order needs to be maintained, so we cannot use set as it always give output in sorted order.
sample output 2 using set will be : 'abcd'
Also, unordered_set do not guarantee any order.
