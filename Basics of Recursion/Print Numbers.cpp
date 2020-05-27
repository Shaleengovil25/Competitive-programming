#include <iostream>
using namespace std;
void print(int n){
    if(n > 0){
        
        print(n - 1);  
        cout << n << " ";
    }
    
}
int main() {
	
	print(6);
	// Print(6) => 6>0 => print(5) => print(4) => print(3) => print(2) => print(1) => print(0) doest not satisfy the condition.
	// control goes to print(1) and cout << 1 is executed, likewise, 1 to n gets printed.

	return 0;
}
