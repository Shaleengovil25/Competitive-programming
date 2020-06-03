//Time O(logn) Space O(logn)
#include <iostream>
#include<map>
#include<iterator>
using namespace std;

int main() {

      int n;
      cin >> n;
      char v[n];  
      for(int i=0;i<n;i++){
          cin >> v[i];
      }
        //    OR
        
        //   string s;
        // getline(cin,s);
        // vector<char> v(s.begin(),s.end());
        // No need to give size of array here.
      
	map<char,int> m;
	for(int i=0;i<n;i++){
	    m[v[i]]++;
	}
	
	map<char,int>::iterator it1;
	it1 = m.find('a');
	if(it1 == m.end()){
	    cout << "0" << " ";
	}
	else{
	    cout << it1->second << " ";
	}
	
	map<char,int>::iterator it2;
	it2 = m.find('s');
	if(it2 == m.end()){
	    cout << "0" << " ";
	}
	else{
	    cout << it2->second << " ";
	}
	
	map<char,int>::iterator it3;
	it3 = m.find('p');
	if(it3 == m.end()){
	    cout << "0" << " ";
	}
	else{
	    cout << it3->second << " ";
	}
	
	return 0;
}


Sample Input:
6
aabsas

Sample output:
3 2 0
