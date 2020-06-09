#include <bits/stdc++.h>
using namespace std;

void replaceCharacter(char input[], char c1, char c2) {

    if(input[0] == '\0'){
        return;
    }
    if(input[0] != c1){
        replaceCharacter(input+1,c1,c2);
    }
    if(input[0] == c1){
        input[0] = c2;
        replaceCharacter(input+1,c1,c2);
    }

}


int main() {
    char *input = new char[1000000];
    cin >> input;
    char c1, c2;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
    delete [] input;
}

Sample Input :
abacd
a x
Sample Output :
xbxcd

