#include <bits/stdc++.h>
using namespace std;
int maxProductSubarray(int arr[],int n){
    
    int max_ending_here =1;
    int min_ending_here =1;
    int max_so_far = 1;
    
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            max_ending_here *= arr[i];
            min_ending_here = min(1,min_ending_here*arr[i]);
        }
        else if(arr[i] == 0){
            max_ending_here = 1;
            min_ending_here = 1;
        }
        else{
            int temp = max_ending_here;
            max_ending_here = max(1,min_ending_here*arr[i]);
            min_ending_here = temp*arr[i];
        }
        
        max_so_far = max(max_so_far,max_ending_here);
    }
    
    return max_so_far;
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	cout << maxProductSubarray(arr,n);
	delete [] arr;
	return 0;
}
