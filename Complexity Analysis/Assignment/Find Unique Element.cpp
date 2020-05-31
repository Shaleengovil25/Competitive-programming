//Time O(n) Space O(1)
#include <bits/stdc++.h>
using namespace std;
int FindUnique(int arr[],int size){
    int xor_arr = 0;
    for(int i=0;i<size;i++){
        xor_arr = xor_arr ^ arr[i];
    }
    return xor_arr;
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	cout << FindUnique(arr,n);
	delete [] arr;
	return 0;
}

Constraints :
1 <= N <= 10^6

Sample Input :
7
2 3 1 6 3 6 2

Sample Output :
1

Concept Used:
A B A XOR B (A^B)
0 0    0
0 1    1
1 0    1
1 1    0

a ^ a = 0
c ^ 0 = c
