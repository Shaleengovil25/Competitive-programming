https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple3&problemid=414

#include<bits/stdc++.h>
using namespace std;

int main(){
    // freeopen("input.txt","r",stdin);
    // freeopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    int arr[n],count=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%3 == 0){
            count++;
        }
    }
    if(count > 0){
        cout << count << '\n';    
    }
    else{
        cout << "Nothing Here!";
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]%3 == 0){
            cout << i+1;
        }
    }
    return 0;
}
