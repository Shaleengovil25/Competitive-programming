#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum_even = 0, sum_odd = 0;
    for(int i=0;i<n;i++){
        if(i%2 == 0 && arr[i]%2 == 0){
            sum_even+=arr[i];
        }
        else if(i%2 == 1 && arr[i]%2 == 1){
            sum_odd+=arr[i];
        }
    }
    cout << sum_even << " " << sum_odd;
    
    return 0;
}
