
#include <iostream>
#include<math.h>
using namespace std;
int power(int x, int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    
    if(n==0){
        return 1;
    }
    int smalloutput = power(x,n-1);
    int ans = x * smalloutput;
    return ans;
    

}

int main() {
	// your code goes here
	 
	 int d = power(3,4);
	 cout << d;

	return 0;
}
