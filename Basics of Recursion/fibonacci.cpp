//RECURSIVELY
//Time O(2^n) Space O(n)
#include <iostream>
using namespace std;
int fibo(int n){ // series starts from 0.
    return (n==0 || n==1)?n:fibo(n-1)+fibo(n-2);
}

//OR

int fibo(int n){  // series starts from 1.
    return (n==1 || n==2)?1:fibo(n-1)+fibo(n-2);
}

int main()
{
    int ans = fibo(12);
    cout << ans;

    return 0;
}

//ITERATIVELY
//Time O(n) Space O(1)
#include <iostream>
using namespace std;
typedef long long ll;

long long fibo(int n){
    if(n==0||n==1){
        return n;
    }
    ll a = 0;
    ll b = 1;
    ll temp = 0;
    for(int i=0;i<n-1;i++){
        temp = a+b;
        a=b;
        b= temp;
    }
    return temp;
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}

//NOTE: Recursive code is unable to bring the 45th fibonacci term due to runtime error.
