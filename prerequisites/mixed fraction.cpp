https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=362

#include<bits/stdc++.h>
using namespace std;

int main(){
    // freeopen("input.txt","r",stdin);
    // freeopen("output.txt","w",stdout);
    
    int n,d;
    cin >> n >> d;
    int q,r;
    q = n/d;
    r = n%d;
    if (r == 0){
        cout << q;
    }
    else{
        cout << q << " " << r <<"/" << d;
    }
    
    
    return 0;
}
