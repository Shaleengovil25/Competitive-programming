#include <iostream>
using namespace std;
int sum(int input[],int n){
    
    return (n==1)?input[0]:input[0]+sum(input+1,n-1);

}

int main() {
	// your code goes here
	int size;
	cin >> size;
	int *arr = new int[size];
	for(int i=0;i<size;i++){
	    cin >> arr[i];
	}
	cout << sum(arr,size);
	delete [] arr;
	return 0;
}
