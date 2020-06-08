//Time O(nlogn) Space O(logn)
#include <bits/stdc++.h>
using namespace std;

long long Merge(int a[],int left,int mid,int right){
    int i = left;
    int j = mid;
    int k = 0;
    int temp[right - left + 1];
    long long count =0;
    
    while(i<mid && j<=right){
        if(a[i] <= a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
            count += mid-i;
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
    return count;
}

long long Mergesort(int arr[],int left,int right){
    if(left < right){
        int mid = (left + right)/2;
        long long count1 = Mergesort(arr,left,mid);
        long long count2 = Mergesort(arr,mid+1,right);
        long long count3 = Merge(arr,left,mid+1,right);
        
        return count1 + count2 + count3;
    }
    else{
        return 0;
    }
}



long long solve(int A[], int n){
    long long ans = Mergesort(A,0,n-1);
    return ans;
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	long long inversions = solve(arr,n);
	cout << inversions;
	
	
	
	
	delete [] arr;
	return 0;
}


Sample Input 1 :
5
2 5 1 3 4
Sample Output 1 :
4
