https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple1&problemid=372

#include<bits/stdc++.h>
using namespace std;

int main(){
    // freeopen("input.txt","r",stdin);
    // freeopen("output.txt","w",stdout);
    
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3,y3,x4,y4;
    cin >> x3 >> y3 >> x4 >> y4;
    
    int A1 = (y2-y1)*(x2-x1);
    int A2 = (y4-y3)*(x4-x3);
    
    int left = max(x1,x3);
    int right = min(x2,x4); 
    int top = min (y2,y4);
    int bottom = max(y1,y3);
    
    int Aintr = 0;
    if (top > bottom && left < right){
        Aintr = (right - left)*(top - bottom);
    }
    
    int ans = A1 + A2 - Aintr;
    cout << ans;
    
    return 0;
}
