// BRUTE FORCE 
//Time O(n^2) Space O(1)
#include <bits/stdc++.h>
using namespace std;

void Pairsum(int *input,int n){
    for(int i=0;i<n;i++){
        int curr = input[i];
        for(int j=i+1;j<n;j++){
            if(curr + input[j] == 0){
                if(curr > input[j]){
                    cout << input[j] << " " << curr << endl;
                }
                else{
                    cout << curr << " " << input[j] << endl;
                }
            }
        }
    }
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	Pairsum(arr,n);
	
    delete [] arr;
	return 0;
}

-----------------------------------------------------------

//USING HASH MAP
//Time O(n) Space O(n)
#include <bits/stdc++.h>
using namespace std;

void Pairsum(int *input,int n){
    unordered_map<int,int> m;
    
    for(int i=0;i<n;i++){
        if(m.find(-input[i]) != m.end()){
            int count = m[-input[i]]; // Stores number of occurences of an element.
            for (int j = 0; j < count; j++){
                if(input[i] > 0){
                    cout << -input[i] << " " << input[i] << endl;
                }
                else{
                    cout << input[i] << " " << -input[i] << endl;
                }
                
            }
            
        }
        m[input[i]]++;
        
    }
    
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	Pairsum(arr,n);
	
    delete [] arr;
	return 0;
}

---------------------------------------------------------
SAMPLE INPUT1:
6
6 -6 5 4 -5 -4

SAMPLE OUTPUT1:
-6 6
-5 5
-4 4

SAMPLE INPUT2:
5
2 1 -2 2 3

SAMPLE OUTPUT2:
-2 2
-2 2
