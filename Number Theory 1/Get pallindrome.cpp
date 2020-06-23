//APPROACH 1 =>

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin >> n;
	int rev = 0;
	int r = 0;
	int temp = n;
	
	for(int i=1;i<=temp;i++){
	    
	    int j = i;
	    
	    	while(j>=1){
	            r = j%10;
	            rev = rev*10 + r;
	            j=j/10;
	            
                if(i == rev){
                cout << rev << "\n";
	            }
	    
	        }
	         rev =0;
	         r = 0;
	    
	    
	}
	
	return 0;
}

//APPROACH 2 =>

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool check(int n){
    string s1 = to_string(n);
    string s2 = s1;
    reverse(s1.begin(),s1.end());
    if(s1 == s2){
        return true;
    }
    return false;
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
	    if(check(i)){
	        cout << i << endl;
	    }
	}

	return 0;
}



Sample Input : 101
Sample Output :
1
2
3
4
5
6
7
8
9
11
22
33
44
55
66
77
88
99
101
