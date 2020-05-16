#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    
    int sum_top_row = 0;
    for(j=0;j<n;j++) {
        sum_top_row += arr[0][j];
    }
    int sum_bottom_row = 0;    
    for(j=0;j<n;j++){
        sum_bottom_row += arr[n-1][j];
    }
    int sum_left_row = 0;
    for(i=0;i<n;i++){
        sum_left_row += arr[i][0];
    }
    int sum_right_row = 0;
    for(i=0;i<n;i++){
        sum_right_row += arr[i][n-1];
    }
    int c1 = arr[0][0];
    int c2 = arr[0][n-1];
    int c3 = arr[n-1][0];
    int c4 = arr[n-1][n-1];
    
    int s1 = sum_top_row + sum_bottom_row + sum_right_row + sum_left_row - (2*(c1 +c2 +c3 +c4));
    
    int sum_diagonal1 = 0;
    int sum_diagonal2 = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i == j){
                sum_diagonal1 += arr[i][j];
            }
            else if((i+j) == n-1){
                sum_diagonal2 += arr[i][j];
                
            }
        }
    }
    
    int s2 = sum_diagonal1 + sum_diagonal2;
    int required_sum = s1 +s2;
    cout << required_sum;
    return 0;
}
