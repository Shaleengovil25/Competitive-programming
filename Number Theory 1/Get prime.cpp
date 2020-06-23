#include <iostream>
#include <cmath>
using namespace std;

bool check(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	cout << "2" << endl;
	for(int i=3;i<=n;i++){
	    if(check(i)){
	        cout << i << endl;
	    }
	}

	return 0;
}

Sample Input:
100
Sample Output:
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
