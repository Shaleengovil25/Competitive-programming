#include <iostream>
using namespace std;
int lastIndex(int input[], int size, int x){
    if(input[size-1] == x){
        return size-1;
    }
    if(size == 0){
        return -1;
    }
    int smallop = firstIndex(input,size-1,x);
    return smallop;
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
    cout << lastIndex(arr,size,x);
	delete [] arr;
	return 0;
}
