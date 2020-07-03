//Time O(n*logn) + O(n) = O(n*log2n), Space O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	sort(arr,arr+n);
	int i=0;
	int j=1;
	long sum = 0;
	while(j<n){
	    if(arr[j] - arr[i] >= k){
	        sum += (n-j);
	        i++;
	    }
	    else{
	        j++;
	    }
	}

	cout << sum;
	return 0;
}
