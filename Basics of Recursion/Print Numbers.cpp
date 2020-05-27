#include <iostream>
#include<math.h>
using namespace std;
void print(int n){
    if(n > 0){
        
        print(n - 1);  
        cout << n << " ";
    }
    
}
int main() {
	// your code goes here
	
	print(6);

	return 0;
}
