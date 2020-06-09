#include <bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char *input) {
    
    if(input[0] == '\0'){
        return;
    }
    
    removeConsecutiveDuplicates(input+1);
    
    if(input[0] == input[1]){
        int i=1;
        for(;input[i]!='\0';i++){
            input[i-1] = input[i];
        }
        input[i-1] = input[i];
    }
    else{
        return;
    }
}

int main() {
    char *s = new char[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}


Sample Input 1 :
aabccba
Sample Output 1 :
abcba

Sample Input 2 :
xxxyyyzwwzzz
Sample Output 2 :
xyzwz
