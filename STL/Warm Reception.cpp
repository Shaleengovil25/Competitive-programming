//Time O(n) Space O(n)
#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arrival = new int[n];
	int *departure = new int[n];
    
    for(int i=0;i<n;i++){
	    cin >> arrival[i];
	}
	for(int i=0;i<n;i++){
	    cin >> departure[i];
	}
	
	multimap<int,char> m;
	for(int i=0;i<n;i++){
	    m.insert(make_pair(arrival[i],'a'));     
	    m.insert(make_pair(departure[i],'d'));
	}
	int chair = 0;
	int ans = 1;
	multimap<int,char>::iterator it;
	for(it=m.begin();it!=m.end();it++){
	    if(it->second == 'a'){
	        chair++;
	    }
	    else{
	        chair--;
	    }
	    if(ans < chair){
	        ans = chair;
	    }
	}
	
	cout << ans;
	
	
	delete [] arrival;
	delete [] departure;
	return 0;
}

SAMPLE INPUT:
5
900 1000 1100 1030 1600
1900 1300 1130 1130 1800

SAMPLE OUTPUT:
4

NOTE: MultiMap has unique pairs while Map has unique keys to all values.
for eg. (2,a);(3,a) can be in multimap but not in map.
(2,a);(3,b) can be in multimap and map as well.

For more info, refer:
https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/
