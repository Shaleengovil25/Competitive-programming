//Time O(logn * logn) Space O(1)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll n, ll k){
    ll sum = 0;
    ll curr = n;
    while(curr > 0){
        sum = sum + min(curr,k);
        curr = curr - k;
        curr = curr - curr/10;
        
        if(2*sum >= n){
            return true;
        }
    }
    return false;
}

int main() {
	// your code goes here
	ll n;
	cin >> n;
	ll start = 1;
	ll end = n;
	ll ans = 0;
	while(end >= start){
	    ll mid = start + (end-start)/2;
	    if(check(n,mid)){
	        ans = mid;
	        end = mid - 1;
	    }
	    else{
	        start = mid + 1;
	    }
	}
	
	cout << ans;
	
	return 0;
}


Sample Input:
68

Sample Output:
3
