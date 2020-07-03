//Time O(query*log(intervals)) Auxilliary_Space O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int intervals,query;
	    cin >> intervals >> query;
	    vector< pair<int,int> > v;
	    int l,r;
	    for(int i=0;i<intervals;i++){
	        cin >> l >> r;
	        v.push_back(make_pair(l,r));
	    }
	    sort(v.begin(),v.end());
	    while(query--){
	        int q;
	        cin >> q;  
	        int pos = lower_bound(v.begin(), v.end(), make_pair(q,0)) - v.begin();
	        if(pos == 0){
	            cout << v[pos].first - q << endl;
	        }
	        else{
	            if(v[pos-1].second > q){
	                cout << "0" << endl;
	            }
	            else if(pos < v.size()){
	                cout << v[pos].first - q << endl;
	            }
	            else{
	                cout << "-1" << endl;
	            }
	        }
	    }

	}
	return 0;
}

https://www.codechef.com/problems/CHEFRES
