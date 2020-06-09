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

int keypad(int num, string output[]){
    if(num == 0){
        return 0;
    }
    int y = num%10;
    string s = input(y);
    int smalloutput = keypad(num/10,output);
    if(smalloutput == 0){
        for(int i=0;i<s.size();i++){
            output[i] = s[i];
        }
        return s.size();
    }
    else{
        for(int i=s.size()-1;i>=0;i--){
            for(int j=0;j<smalloutput;j++){
                output[j+i*smalloutput]=output[j]+s[i];
            }
        }
    
        return s.size()*smalloutput;

    }


}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
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
