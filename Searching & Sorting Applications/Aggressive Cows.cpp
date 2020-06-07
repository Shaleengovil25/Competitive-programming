//Time O(nlogd) Space O(1)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(int c, ll arr[], int n, ll d ){
    ll last_position = arr[0];
    int count = 1;
    for(int i=1;i<n;i++){
        if((arr[i] - last_position) >= d){
            last_position = arr[i];
            count++;
        }
        if(count == c){
            return true;
        }
    }
    return false;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	    int n,c;
    	cin >> n >> c;
    	ll arr[n];
    	for(int i=0;i<n;i++){
    	    cin >> arr[i];
    	}
    	
    	sort(arr,arr+n);
    	ll start = 0;
    	ll end = arr[n-1] - arr[0];
    	
    	ll ans = 0;
    	
    	while(start <= end){
    	    ll mid = start + (end - start)/2;
    	    if(check(c,arr,n,mid)){
    	        ans = mid;
    	        start = mid + 1;
    	    }
    	    else{
    	        end = mid - 1;
    	    }
    	}
    	
    	cout << ans << endl;
	
	}
	
	return 0;
}

SAMPLE INPUT:
1
5 3
1
2
8
4
9

SAMPLE OUTPUT:
3

EXPLANATION:
FJ can put his 3 cows in the stalls at positions 1, 4 and 8, 
resulting in a minimum distance of 3.
