//Time O(qlogs)
#include <bits/stdc++.h>
using namespace std;

void binary_search(int start,int end,int prefix_sum[],int q){
    
	    while(start <= end){
    	    int mid = (start+end)/2;
    	    if(prefix_sum[mid] <= q && prefix_sum[mid+1] > q){
    	            cout << mid+1 << " ";
    	            cout << q - prefix_sum[mid] << endl;
    	            break;
    	    }
    	    else if(prefix_sum[mid] > q){
    	            end = mid-1;
    	    }
    	    else{
    	        start = mid + 1;
    	    }
	    }
	    if(q < prefix_sum[0]){
	        cout << "0" << " " << q <<endl;
	    }
	    return;
                                        	 
}

int main() {
	// your code goes here
	int s;
	cin >> s;
	int price[s];
	int prefix_sum[s];
	for(int i=0;i<s;i++){
	    cin >> price[i];
	}
	prefix_sum[0] = price[0];
	for(int i=1;i<s;i++){
	    prefix_sum[i] = prefix_sum[i-1] + price[i]; 
	}
	int d;
	cin >> d;
	
	while(d--){
	    int q;
	    cin >> q;
	    int start = 0;
	    int end = s-1;
	    binary_search(start,end,prefix_sum,q);

	}

	
	return 0;
}

SAMPLE INPUT:
6
3 3 2 8 5 8 
4
4
2
25
17

SAMPLE OUTPUT:
1 1
0 2
5 4
4 1

NOTE: Approach 2 can be by direct use of upper_bound() on prefix sum array.
