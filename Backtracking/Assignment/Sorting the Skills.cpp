//Time O(n) Space O(1)
#include <bits/stdc++.h>
using namespace std;

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

	    for(int i=0;i<n-1;){
	        if((arr[i] > arr[i+1]) && (arr[i] - arr[i+1] == 1)){
	            swap(arr[i],arr[i+1]);
	            i++;
	        }
	        else{
	            i++;
	        }
	    }
	    
	    int flag = 0;
	    for(int i=0;i<n;i++){
	        if(i == arr[i]){
	            flag = 1;
	        }
	        else{
	            flag = 0;
	            break;
	        }
	    }
	    if(flag==1){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	    
	    delete [] arr;
	    
	}
	return 0;
}


Sample Input:
2
4
1 0 3 2
3
2 1 0

Sample Output:
Yes
No

Explanation:
In first T.C., [1, 0, 3, 2] -> [0, 1, 3, 2] -> [0, 1, 2, 3]
In second T.C., [2, 1, 0] -> [1, 2, 0]  OR  [2, 1, 0] -> [2, 0, 1] So, it is impossible to sort.
