// Time O(n*k) Space O(n*k)
#include <iostream>
using namespace std;
int kcon(int arr[],int n,int k){
    int max_ending_here = 0;
    int best_so_far = 0;
    for(int i=0;i<n*k;i++){
        max_ending_here += arr[i%n];
        if(max_ending_here<0){
            max_ending_here = 0;
        }
        if(best_so_far < max_ending_here){
            best_so_far = max_ending_here;
        }
    }
    return best_so_far;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int *arr = new int[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    cout << kcon(arr,n,k) << "\n";

	    delete [] arr;
	}
	return 0;
}


//Efficient Solution of Time O(n) Space O(1)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll kadane(int arr[],int n){
    ll max_ending_here = 0;
    ll best_so_far = INT_MIN;
    for(int i=0;i<n;i++){
        max_ending_here += arr[i];
        if(best_so_far < max_ending_here){
            best_so_far = max_ending_here;
        }
        if(max_ending_here<0){
            max_ending_here = 0;
        }
    }
    return best_so_far;
}

ll MaxSubarraySum(int arr[],int n,int k){
    ll kadanes_sum = kadane(arr,n);
    if(k==1){
        return kadanes_sum;
    }
    ll curr_prefix_sum = 0;
    ll curr_suffix_sum = 0;
    ll max_prefix_sum = INT_MIN;
    ll max_suffix_sum = INT_MIN;
    
    for(int i=0;i<n;i++){
        curr_prefix_sum += arr[i];
        max_prefix_sum = max(curr_prefix_sum,max_prefix_sum);
    }
    ll total_sum = curr_prefix_sum;
    
    for(int i=n-1;i>=0;i--){
        curr_suffix_sum +=arr[i];
        max_suffix_sum = max(curr_suffix_sum,max_suffix_sum);
    }
    ll ans;
    if(total_sum < 0){
        ans = max(max_prefix_sum + max_suffix_sum,kadanes_sum);
    }
    else{
        ans = max(max_suffix_sum + max_prefix_sum + total_sum*(k-2),kadanes_sum);
    }
    return ans;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    cout << MaxSubarraySum(arr,n,k) << "\n";

	}
	return 0;
}
