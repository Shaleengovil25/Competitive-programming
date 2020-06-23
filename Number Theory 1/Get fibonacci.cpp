#include <iostream>
#include <cmath>
using namespace std;

int fibo(int n){
    return (n==0||n==1)?n:fibo(n-1)+fibo(n-2);
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
	    if(fibo(i) <= n){
	        cout << fibo(i) << " ";
	    }
	    else{
	        break;
	    }
	}

	return 0;
}

Sample Input:
100
Sample Output:
1 1 2 3 5 8 13 21 34 55 89
