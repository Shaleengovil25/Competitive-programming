//APPROACH 1 USING MAP ->
//Time O(n) Space O(n)
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n1,n2,n3;
	cin >> n1 >> n2 >> n3;
	int n = n1+n2+n3;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	map<int,int> m;
	for(int i=0;i<n;i++){
	    m[arr[i]]++;
	}
	map<int,int>::iterator it;
	vector<int> o;
	for(it=m.begin();it!=m.end();it++){
	    if(it->second !=1){
	        o.push_back(it->first);
	    }
	}
	cout << o.size() << endl;
	for(int i=0;i<o.size();i++){
	    cout << o[i] << endl;
	}
	
	delete [] arr;
	return 0;
}

-----------------------------------------------------
	
//APPROACH 2 USING CONCURRENT FREQUENCY ->
//Time O(nlogn) Space O(n)
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n1,n2,n3;
	cin >> n1 >> n2 >> n3;
	int n = n1+n2+n3;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	sort(arr,arr+n);
	vector<int> o;
	for(int i=0;i<n;){
	    int count =0;
	    int j = i;
	    while(j<n && (arr[i] == arr[j])){
	        count++;
	        j++;
	    }
	    if(count >= 2){
	        o.push_back(arr[i]);
	    }
	    i = j;
	}
	cout << o.size() << endl;
	for(int i=0;i<o.size();i++){
	    cout << o[i] << endl;
	}
	
	delete [] arr;
	return 0;
}


