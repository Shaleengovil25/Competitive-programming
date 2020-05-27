
#include <iostream>
#include<math.h>
using namespace std;
int count(int n){
    if(n == 0){
        return 0;
    }
    int smallAns = count(n / 10);
    return smallAns +1;
}
int main() {
	// your code goes here
	
	int ans = count(156);
	cout << ans;

	return 0;
}
