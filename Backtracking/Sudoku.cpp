#include <bits/stdc++.h>
using namespace std;
# define N 9

bool findEmptyPosition(int grid[N][N],int &row,int &col){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(grid[i][j] == 0){
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}

bool isSafeinRow(int grid[N][N],int row,int i){
    for(int j=0;j<N;j++){
        if(grid[row][j] == i){
            return false;
        }
    }
    return true;
}

bool isSafeinCol(int grid[N][N],int col,int i ){
    for(int j=0;j<N;j++){
        if(grid[j][col] == i){
            return false;
        }
    }
    return true;
}

bool isSafeinBox(int grid[N][N],int row,int col,int i){
    int rf = row -(row%3);
    int cf = col - (col%3);
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            if(grid[j+rf][k+cf] == i){
                return false;
            }
        }
    }
    return true;
}

bool isSafe(int grid[N][N],int row,int col,int i){
    if(isSafeinRow(grid,row,i) && isSafeinCol(grid,col,i) && isSafeinBox(grid,row,col,i)){
        return true;
    }
    return false;
}

bool solveSudoku(int grid[N][N]){
    int row,col;
    if(!findEmptyPosition(grid,row,col)){
        return true;
    }
    
    for(int i=1;i<=N;i++){
        if(isSafe(grid,row,col,i)){
            grid[row][col] = i;
            if(solveSudoku(grid)){
                return true;
            }
            grid[row][col] = 0;
        }
    }
    return false;
}

int main() {
	// your code goes here
	int grid[N][N];
	for(int i=0;i<N;i++){
	    for(int j=0;j<N;j++){
	        cin >> grid[i][j];
	    }
	}

	solveSudoku(grid);
	
	for(int i=0;i<N;i++){
	    for(int j=0;j<N;j++){
	        cout << grid[i][j] << " ";
	    }
	    cout << endl;
	}
	return 0;
}



Sample Input:

  3 0 6 5 0 8 4 0 0
  5 2 0 0 0 0 0 0 0
  0 8 7 0 0 0 0 3 1
  0 0 3 0 1 0 0 8 0
  9 0 0 8 6 3 0 0 5
  0 5 0 0 9 0 6 0 0
  1 3 0 0 0 0 2 5 0
  0 0 0 0 0 0 0 7 4
  0 0 5 2 0 6 3 0 0
  
  Sample Output:
  
3 1 6 5 7 8 4 9 2 
5 2 9 1 3 4 7 6 8 
4 8 7 6 2 9 5 3 1 
2 6 3 4 1 5 9 8 7 
9 7 4 8 6 3 1 2 5 
8 5 1 7 9 2 6 4 3 
1 3 8 9 4 7 2 5 6 
6 9 2 3 5 1 8 7 4 
7 4 5 2 8 6 3 1 9 
