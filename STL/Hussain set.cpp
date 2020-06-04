//Time O(n*x) Space O(n)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int x;
	cin >> x;
	ll *arr1 = new ll[n];
	ll *arr2 = new ll[n];
	for(int i=0;i<n;i++){
	    cin >> arr1[i];
	}
	for(int i=0;i<n;i++){
	     arr2[i] = arr1[i];
	}
	
	while(x--){
	    int q;
	    cin >> q;
	    int flag = 0;
	    for(int i=0;i<q-1;i++){
	        sort(arr2,arr2+n);
	        arr2[n-1] /= 2;
	        flag = 1;
	    }
	    if(flag == 0){
	        sort(arr1,arr1+n);
	        cout << arr1[n-1] << endl;
	    }
	    else{
	        cout << arr2[n-2] << endl;
	    }
	    
    	    for(int i=0;i<n;i++){
    	     arr2[i] = arr1[i];
    	    }
	    
	}

	// for each query O(n) time is required.
	// NOT A EFFICIENT SOLUTION.(2.01 second)

	
	delete [] arr1;
	delete [] arr2;
	return 0;
}

--------------------------------------

//Time O(n) Space O(n)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	int n,x;
	cin >> n >> x;
	ll *arr = new ll[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	sort(arr,arr+n);
	queue<ll> q;
	int count = 0;
	int end = n-1;
	while(x--){
	    int query;
	    cin >> query;
	    ll ans;
	    for(;count<query;count++){
	        if(end >=0 &&(q.empty() || arr[end] >= q.front())){
	            ans = arr[end];
	            end--;
	        }
	        else{
	            ans = q.front();
	            q.pop();
	        }
	        q.push(ans/2);
	    }
	    cout << ans << endl;
	}
	
	//Here sorting is used only once and not in every iteration.
	//EFFICIENT SOLUTION.(1.53 second)
	
	delete [] arr;
	return 0;
}

---------------------------------------------------


