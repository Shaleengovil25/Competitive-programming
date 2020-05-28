#include <iostream>
using namespace std;
bool checkNumber(int input[], int size, int x){
    if(input[0] == x){
        return true;
    }
    if(size == 0){
        return false;
    }
    bool checkSmall = checkNumber(input+1,size-1,x);
    return checkSmall;
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
	bool b = checkNumber(arr,size,x);
	cout << boolalpha << b;  // w/o boolalpha true gets printed as 1 and false as 0.
	delete [] arr;
	return 0;
}
