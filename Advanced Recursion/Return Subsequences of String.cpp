#include <bits/stdc++.h>
using namespace std;

int subs(string input, string output[]){
    if(input.empty()){
        output[0] = " ";
        return 1;
    }
    string smallstring = input.substr(1);
    int smalloutput = subs(smallstring,output);
    for(int i=0;i<smalloutput;i++){
        output[i+smalloutput] = input[0] + output[i];
    }
    return 2*smalloutput;
}

int main() {
	// your code goes here
	string s;
	cin >> s;
	long long output_length = pow(2,s.size());
	string *output = new string[output_length];
	int n = subs(s,output);
	for(int i=0;i<n;i++){
	    cout << output[i] << endl;
	}
	delete [] output;
	return 0;
}


Sample Input:
abc
Sample Output:

c 
b 
bc 
a 
ac 
ab 
abc
