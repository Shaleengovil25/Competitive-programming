//Time O(n) Space O(n)
#include <bits/stdc++.h>
using namespace std;

struct student{
  string name;
  float marks1;
  float marks2;
  float marks3;
};

int main() {
	// your code goes here
	int n;
	cin >> n;
	student arr[n];
	float total[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i].name >> arr[i].marks1 >> arr[i].marks2 >> arr[i].marks3;
	}
	for(int i=0;i<n;i++){
	         total[i] = (100-((arr[i].marks1 + arr[i].marks2 + arr[i].marks3)/3));
	}
	
	multimap<float,string> m;
	for(int i=0;i<n;i++){
	    m.insert(make_pair(total[i],arr[i].name));
	}
	int count = 1;
	multimap<float,string>::iterator it;
	for(it=m.begin();it!=m.end();it++){
	    cout << count << " ";
	    cout << it->second << endl;
	    count++;
	}
	
	
	return 0;
}

SAMPLE INPUT:
3
Shaleen 91 99 99
Aranaya 99 98 99
Rachit 98 96 95

SAMPLE OUTPUT:
1 Aranaya
2 Shaleen
3 Rachit
