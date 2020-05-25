#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    for(int j=0;j<n;j++){
        if(j%2 == 0){
            for(int i=0;i<n;i++){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                cout << arr[i][j] << " ";
            }    
        }
    }
    
    
    
    return 0;
}


sample input:
3
1 2 3 
4 5 6
7 8 9

sample output:
1 4 7 8 5 2 3 6 9 
