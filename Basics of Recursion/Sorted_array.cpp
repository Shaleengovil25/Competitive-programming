#include <iostream>
using namespace std;

bool is_sorted(int a[], int size){
    if(size == 0 || size == 1){
        return true;
    }
    
    if(a[0]>a[1]){
        return false;
    }
    
    bool is_smallsorted = is_sorted(a+1,size-1);
    return is_smallsorted;
}

int main() {
	// your code goes here
	int size;
	cin >> size;
	int *a = new int[size];
	for(int i=0;i<size;i++){
	    cin >> a[i];
	}
	cout << is_sorted(a,size);
	delete [] a;
	return 0;
}
