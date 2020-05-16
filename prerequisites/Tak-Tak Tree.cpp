https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple2&problemid=382

#include<bits/stdc++.h>
using namespace std;

bool distribute_equally(int fruits){
    if(fruits%11 == 1){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    // freeopen("input.txt","r",stdin);
    // freeopen("output.txt","w",stdout);
    
    int fruits,new_moon;
    cin >> fruits;
    
    while(!distribute_equally(fruits)){
        fruits *=2;
        new_moon++;
    }
    
    cout << new_moon << " " << fruits;
    
    return 0;
}
