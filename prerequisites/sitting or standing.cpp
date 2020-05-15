https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=342

#include<bits/stdc++.h>
using namespace std;

int main(){
    // freeopen("input.txt","r",stdin);
    // freeopen("output.txt","w",stdout);
    
    int r,s;
    cin >> r >> s;
    int tickets;
    cin >> tickets;
    if(tickets > r*s) {
        cout << r*s << " " << tickets - r*s ;
    }
    else{
        cout << tickets << " " << "0";
    }
    
    
    return 0;
}
