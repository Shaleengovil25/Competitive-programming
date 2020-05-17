https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple3&problemid=416

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,arr[1000];
    cin >> n;
    
    for(int i=0;i<1001;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        int p1,p2;
        cin >> p1 >> p2;
        arr[p1]++;
        arr[p2]++;
    }
    
    int max = 0;
    
    for(int i=0;i<1001;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    for(int i=0;i<1001;i++){
        if(max == arr[i]){
            cout << i << "\n";
        }
    }
    
    return 0;
}
