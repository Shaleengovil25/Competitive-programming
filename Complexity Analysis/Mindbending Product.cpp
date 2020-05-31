#include <bits/stdc++.h>
using namespace std;
void Mindbending(int arr[],int n,long prod_arr[]){
    long lp = 1;
    for(int i=0;i<n;i++){
        prod_arr[i] = lp;
        lp *= arr[i];
    }
    long rp = 1;
    for(int i=n-1;i>=0;i--){
        prod_arr[i] *=rp;
        rp *= arr[i];
    }
    for(int i=0;i<n;i++){
        cout << prod_arr[i] << " ";
    }
    cout << "\n";
    
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
    	cin >> n;
    	int arr[n];
    	long prod_arr[n];
    	for(int i=0;i<n;i++){
    	    cin >> arr[i];
    	}
        Mindbending(arr,n,prod_arr);
	}
	return 0;
}


Sample Input:
2
3
2 5 8
4
2 4 6 3

Sample Output:
40 16 10 
72 36 24 48 
