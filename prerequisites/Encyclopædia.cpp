https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple3&problemid=412

#include<bits/stdc++.h>
using namespace std;

int main(){
    // freeopen("input.txt","r",stdin);
    // freeopen("output.txt","w",stdout);
    
    int n,q;
    cin >> n >> q;
    int arr1[n],arr2[q];
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int page;
    for(int j=0;j<q;j++){
        cin >> arr2[j];
    }
    for(int j=0;j<q;j++){
        cout << arr1[(arr2[j]-1)] << '\n';
    }
    
    return 0;
}
