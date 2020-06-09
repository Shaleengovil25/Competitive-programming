#include <bits/stdc++.h>
using namespace std;
string input(int n){
    if(n==2){
        return "abc";
    }
    else if(n==3){
        return "def";
    }
    else if(n==4){
        return "ghi";
    }
    else if(n==5){
        return "jkl";
    }
    else if(n==6){
        return "mno";
    }
    else if(n==7){
        return "pqrs";
    }
    else if(n==8){
        return "tuv";
    }
    else if(n==9){
        return "wxyz";
    }
    else{
        return "";
    }
}

void printKeypad2(int num,string output){
    if(num == 0){
        cout << output << endl;
    }
    int y = num%10;
    string s = input(y);
    for(int i=0;i<s.size();i++){
        printKeypad2(num/10,s[i]+output);
    }
}
void printKeypad(int num){
    string output = "";
    printKeypad2(num,output);
}
int main() {
	// your code goes here
	int num;
    cin >> num;
    printKeypad(num);
	return 0;
}

Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf
