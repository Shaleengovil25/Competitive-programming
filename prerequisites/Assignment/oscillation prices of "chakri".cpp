#include <bits/stdc++.h> 
using namespace std; 

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int temp = 0;
    for(int i=0;i<n;i++){
        int number = arr[i];
        for(int j=i+1;j<n;j++){
            int profit = arr[j]-number;
            if(profit > temp){
                temp = profit;
            }
        }
    }
    
    cout << temp;
    return 0;
}
