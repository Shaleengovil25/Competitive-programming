//Time O(n^3) Space O(1)
#include <bits/stdc++.h>
using namespace std;
int * bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int flag = 0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
    return arr;
}
void findtriplet(int arr[],int n,int x){
    int sum;
    // sort(arr,arr+n);
        arr = bubblesort(arr,n);
    
        for(int i=0;i<n-2;i++){
        int curr_i = arr[i];
        for(int j=i+1;j<n-1;j++){
            int curr_j = arr[j];
            for(int k=j+1;k<n;k++){
                sum = curr_i + curr_j + arr[k];
                if(sum == x){
                    cout << curr_i << " " << curr_j << " " << arr[k] << "\n";
                }
            }
        }
    }
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	int x;
	cin >> x;
	findtriplet(arr,n,x);
	delete [] arr;
	return 0;
}

Sample Input:
7
7 6 5 4 3 2 1
12

Sample Output:
1 4 7
1 5 6
2 3 7
2 4 6
3 4 5

	
//Efficient Approach Time O(n^2) Space O(1)
//using two-pointer technique
