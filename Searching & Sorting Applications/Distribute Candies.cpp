#include <bits/stdc++.h>
using namespace std;

bool check(long long student,long long a[],int n,long long max_candy){
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + a[i]/max_candy;
        
        if(sum >= student){
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
	    int n;
	    long long k;
	    cin >> n >> k;
        long long arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int max_element = INT_MIN;
	    for(int i=0;i<n;i++){
	        if(max_element < arr[i]){
	            max_element = arr[i];
	        }
	    }
	    
	    long long start = 0;
	    long long end = max_element;
	    long long ans = 0;
	    
	    while(start <= end){
	        long long mid = start + (end - start)/2;
	        if(check(k,arr,n,mid)){
	            ans = mid;
	            start = mid+1;
	        }
	        else{
	            end = mid-1;
	        }
	    }
	    
	    cout << ans << endl;
	}
	
	
	return 0;
}

Sample Input:
2
3 2 
3 1 4
4 1
3 2 3 9
Sample Output:
3
9
