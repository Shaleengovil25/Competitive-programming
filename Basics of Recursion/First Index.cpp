#include <iostream>
using namespace std;
int firstIndex(int input[], int size, int x){
    if(input[0] == x){
        return 0;
    }
    if(size == 0){
        return -1;
    }
    int smallop = firstIndex(input+1,size-1,x);
    return (smallop == -1)?-1:smallop+1;
}


int main() {
	// your code goes here
	int size,x;
	cin >> size;
	int *arr = new int[size];
	for(int i=0;i<size;i++){
	    cin >> arr[i];
	}
	cin >> x;
    cout << firstIndex(arr,size,x);
	delete [] arr;
	return 0;
}

Input:
3
9 8 10 
10

Output:
2

Explanation:
1.firstIndex([8,9,10],3,10) => 2.firstIndex([9,10],2,10) => 3.firstIndex([10],1,10) returns 0 to 2.,2. gives it to smallop which makes
it 1, 1 goes to 1.,1 becomes 2 by smallop and returned to main.

if we don't write smallop+1, output will be 0 always.

