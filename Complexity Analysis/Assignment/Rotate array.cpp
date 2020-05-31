//Time O(n) Space O(1)
#include <bits/stdc++.h>
using namespace std;
void rotate(int a[],int n,int d){
    int *temp = new int[d];
    for(int i=0;i<d;i++){
        temp[i] = a[i];
    }
    for(int i=0;i<n-d;i++){
        a[i] = a[i+d];
    }
    for(int i=n-d;i<n;i++){
        a[i] = temp[i-n+d];
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    delete [] temp;
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	int * arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	int k;
	cin >> k;
	rotate(arr,n,k);
	delete [] arr;
	return 0;
}

Sample Input:
7
1 2 3 4 5 6 7
2

Sample Output:
3 4 5 6 7 1 2

Approach 2 : Reversing the given Array, then Reversing First (n-d) elements and d elements.
