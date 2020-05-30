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
