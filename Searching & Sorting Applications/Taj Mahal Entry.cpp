//Time O(n) Space O(1)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	int n;
	cin >> n;
	ll arr[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	ll x = 0;
	ll m = 1;
	ll j = 0;
	while(j<=(x+1)*n){
	    if((arr[j - x*n]-j) <= 0){
	        cout << ((j+1) - (x*n));
	        break;

	    }
	    
	    else if(j == (n*m) && ((j - x*n) != 0)){
	        x++;
	        m++;
	        j--;
	    }

	    else{
	        j++;
	    }
	}
	
	
	
	return 0;
}

Sample Input:
4
2 3 2 0
Sample Output:
3
Explanation:
Aahad at Window 1: [2, 3, 2, 0]
Aahad at Window 2: [1, 2, 1, 0]
Aahad at Window 3: [0, 1, 0, 0]
So, when Aahad is at window 3, he got zero people before him. Hence, he will get the ticket at window 3.
