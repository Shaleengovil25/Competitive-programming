#include <bits/stdc++.h>
using namespace std;

void print_subs(string input,string output){
    if(input.size() == 0){
        cout << output << endl;
        return;
    }
    
    print_subs(input.substr(1),output);
    print_subs(input.substr(1),output+input[0]);
}

int main() {
	// your code goes here
	string input;
	cin >> input;
	string output = "";
	print_subs(input,output);
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
