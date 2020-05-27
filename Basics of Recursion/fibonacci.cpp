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
