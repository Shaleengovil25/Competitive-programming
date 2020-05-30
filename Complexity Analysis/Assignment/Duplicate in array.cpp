#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	int sum1 = 0;
	for(int i=0;i<n;i++){
	    sum1 += arr[i];
	}
	int sum2 = ((n-2)*(n-1))/2;
	int ans = sum1 - sum2;
	cout << ans;
  delete [] arr;
	return 0;
}
