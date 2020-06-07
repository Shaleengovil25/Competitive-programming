// BRUTE FORCE => Time O(n^3), Space O(1)

#include <iostream>
using namespace std;
int LargestSumSubarray(int a[],int size){
    int curr_sum = 0;
    int max_sum = 0;
    int start = 0,end = 0;
    for(int i=0;i<size;i++){
        curr_sum = a[i];
        for(int j=i+1;j<=size;j++){
            if(curr_sum > max_sum){
                max_sum = curr_sum;
                start = i;
                end = j;
            }
            if(j==size){break;}
            curr_sum +=a[j];
            
        }
    }
    for(int i = start;i<end;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    return max_sum;
}


int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	cout << LargestSumSubarray(arr,n);
	delete [] arr;
	
	return 0;
}

--------------------------------------------------------------
	
// KADANE ALGORITHM => Time O(n), Space O(1)

#include <iostream>
using namespace std;
int Kadane(int a[],int size){
    int max_ending_here = 0;
    int best_so_far = 0;
    int end = 0,start = 0,s = 0;
    for(int i=0; i<size;i++){
        max_ending_here += a[i];
        if(max_ending_here < 0){
            max_ending_here = 0;
            s=i+1;
        }
        if(best_so_far < max_ending_here){
            best_so_far = max_ending_here;
            end = i;
            start = s;
        }
    }
    for(int i = s;i<=end;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    return best_so_far;
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	cout << Kadane(arr,n);
	delete [] arr;
	return 0;
}


For Reference:
https://www.geeksforgeeks.org/find-subarray-with-given-sum/
