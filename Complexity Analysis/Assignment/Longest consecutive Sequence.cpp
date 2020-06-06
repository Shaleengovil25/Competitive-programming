//Time O(n) Space O(n)
#include <bits/stdc++.h>
using namespace std;

vector<int> subsequence(int arr[],int n){
    int ans = 0;
    int start =0;
    vector<int> o;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1) == s.end()){
            int j = arr[i];
            
            while(s.find(j) != s.end()){
                j++;
                
            }
            if(ans < j-arr[i]){
                ans = j - arr[i];
                start = arr[i];
            }
            
        }
    }
    
    for(int i=start;i<(start+ans);i++){
        o.push_back(i);
    }
    return o;
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	vector<int> v;
	v = subsequence(arr,n);
	for(int i=0;i<v.size();i++){
	    cout << v[i] << endl;
	}
	
	
	
    delete [] arr;
	return 0;
}


SAMPLE INPUT1:
7
1 9 3 10 4 20 2

SAMPLE OUTPUT1:
1
2
3
4


SAMPLE INPUT2:
7
3 7 2 1 9 8 1

SAMPLE OUTPUT2:
7
8
9


