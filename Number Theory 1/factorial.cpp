#include <iostream>
using namespace std;

int multiply(int x,int arr[],int size){
    int carry = 0;
    for(int i=0;i<size;i++){
        int prod = arr[i]*x + carry;
        arr[i] = prod%10;
        carry = prod/10;
    }
    while(carry){
        arr[size] = carry%10;
        carry = carry/10;
        size++;
    }
    return size;
}

void factorial(int n){
    int result_matrix[500];
    int result_size = 1;
    result_matrix[0] = 1;
    for(int i=2;i<=n;i++){
        result_size = multiply(i,result_matrix,result_size);
    }
    for(int i=result_size-1;i>=0;i--){
        cout << result_matrix[i];
    }
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	factorial(n);
	return 0;
}

INPUT:
50
OUTPUT:
30414093201713378043612608166064768844377641568960512000000000000
