#include <iostream>
using namespace std;
int allIndexes(int input[],int size,int x,int output[]){
    if(size == 0){
        return 0;
    }
    int ans = allIndexes(input+1,size-1,x,output);
    for(int i=0;i<ans;i++){
        output[i] +=1;
    }
    
    if(input[0] == x){
        for(int i=size-1;i>=0;i--){
            output[i+1] = output[i];
        }
        output[0] = 0;
        return ans +1;
    }
    else{
        return ans;
    }
    
}

int main() {
	// your code goes here
	int size,x,o[10];
	cin >> size;
	int *arr = new int[size];
	for(int i=0;i<size;i++){
	    cin >> arr[i];
	}
	cin >> x;
	int d = allIndexes(arr,size,x,o);
	if(d!=0){
		for(int i=0;i<d;i++){
	    	cout << o[i] << " ";
	    	}    
	}
	else{
	    	cout << d;
	}
	delete [] arr;
	return 0;
}

input:
5
1 8 4 9 8
8

output:
1 4
