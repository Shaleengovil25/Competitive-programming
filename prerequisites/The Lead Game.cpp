https://www.codechef.com/problems/TLG

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cs1 = 0;
    int cs2 = 0;
    int max_lead = 0;
    int max_lead_player = 1;
    
    while(n--){
        int curr_lead = 0, curr_lead_player = 1;
        int s1,s2;
        cin >> s1 >> s2;
        cs1 += s1;
        cs2 += s2;
        if(cs1 > cs2){
            curr_lead = cs1-cs2;
        }
        else{
             curr_lead = cs2 - cs1;
             curr_lead_player = 2;
        }
        if(curr_lead > max_lead){
            max_lead = curr_lead;
            max_lead_player = curr_lead_player;
        }
    }
    
    cout << max_lead_player << " " << max_lead;   
    
    return 0;
    
}
