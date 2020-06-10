#include <bits/stdc++.h>
using namespace std;
int board[11][11];

bool check(int n,int row,int col){
    for(int i=row-1;i>=0;i--){
        if(board[i][col] == 1){
            return false;
        }
    }
    
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(board[i][j] == 1){
            return false;
        }
    }
    
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(board[i][j] == 1){
            return false;
        }
    }
    
    return true;
}

void helper(int n,int row){
    if(row == n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
        return;
    }
    
    for(int i=0;i<n;i++){
        if(check(n,row,i)){
            board[row][i] = 1;
            helper(n,row+1);
            board[row][i] = 0;
        }
    }
    return;
}

void placeNQueens(int n){
    memset(board,0,11*11*sizeof(int));
    
    helper(n,0);
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	
	placeNQueens(n);
	return 0;
}


Sample Input:
4

Sample Output:
0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 
0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0 
