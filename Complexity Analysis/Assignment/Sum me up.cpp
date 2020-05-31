#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here, Time O(n),Space O(1)
	int t;
	cin >> t;
	while(t--){
	    ll n;
	    cin >> n;
	    unsigned long int sum = 0;
	    while(n>=1){
	        sum +=n%10;
	        n = n/10;
	    }
	
	cout << sum << "\n";
	}
	return 0;
}

Constraints:
1 <= t <= 10^5
0 <= val <= 10^18

Sample Input:
2
1547
45876

Sample Output:
17
30
