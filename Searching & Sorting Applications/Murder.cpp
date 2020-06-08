//Time O(nlogn) Space O(logn)
#include <bits/stdc++.h>
using namespace std;

long long Merge(int a[],int left,int mid,int right){
    int i = left;
    int j = mid;
    int k = 0;
    int temp[right - left + 1];
    long long ans =0;
    
    while(i<mid && j<=right){
        if(a[i] < a[j]){
            ans = ans + (right-j+1)*a[i];
            temp[k++] = a[i++];
            
        }
        else{
            temp[k++] = a[j++];
        }
    }
    
    while(i<mid){
        temp[k++] = a[i++];
    }
    while(j<=right){
        temp[k++] = a[j++];
    }
    
    for(int i=left,k=0;i<=right;i++,k++){
        a[i] = temp[k];
    }
    return ans;
}

long long Mergesort(int arr[],int left,int right){
    if(left < right){
        int mid = (left + right)/2;
        long long ans1 = Mergesort(arr,left,mid);
        long long ans2 = Mergesort(arr,mid+1,right);
        long long ans3 = Merge(arr,left,mid+1,right);
        
        return ans1 + ans2 + ans3;
    }
    else{
        return 0;
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	    int n;
    	cin >> n;
    	int *arr = new int[n];
    	for(int i=0;i<n;i++){
    	    cin >> arr[i];
    	}
    	long long sum = Mergesort(arr,0,n-1);
    	cout << sum << endl;
    	delete [] arr;

	}
	
	
	return 0;
}
