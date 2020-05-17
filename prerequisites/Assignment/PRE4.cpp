#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n/2;i++){
        int groups = (a[i] + a[n-i-1])/10;
        int left = (a[i] + a[n-i-1])%10;
        cout << groups << " " << left << "\n";
    }
    
    return 0;
}
