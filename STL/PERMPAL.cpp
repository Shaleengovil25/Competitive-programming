//Time O(n) Space O(n)
#include <bits/stdc++.h>
using namespace std;

char Getchar(int i){
    return char(i+97);
}

void PrintPermpalString(string s){
    map<char,vector<int>> m;
    for(int i=0;i<s.length();i++){
        m[s[i]].push_back(i);
    }
    
    int odd_freq_count = 0;
    for(int i=0;i<26;i++){
        if(m[Getchar(i)].size() % 2 != 0 ){
            odd_freq_count++;
        }
    }
    if(odd_freq_count >= 2){
        cout << "-1";
        return;
    }
    
    int ans[s.length()];
    int start = 0;
    int end = s.length()-1;
    
    for(int i=0;i<26;i++){
        char curr_char = Getchar(i);
        for(int j=0;j < m[curr_char].size();j+=2){
            
            if(m[curr_char].size()-j == 1){
                ans[s.length()/2] = m[curr_char][j];
                continue;
            }
            ans[start] = m[curr_char][j];
            ans[end] = m[curr_char][j+1];
            start++;
            end--;
        }
    }
    
    for(int i=0;i<s.length();i++){
        cout << ans[i] +1 << " ";
    }
    
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;   
	    PrintPermpalString(s);
	    cout << endl;
	    
	}
	
	return 0;
}

SAMPLE INPUT:
4
aa
baa
abc
abab

SAMPLE OUTPUT:
1 2 
2 1 3 
-1
1 2 4 3 
