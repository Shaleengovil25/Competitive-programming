#include <bits/stdc++.h>
using namespace std;

int solution[20][20];

void printSolution(int n){
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << solution[i][j] << " ";
		}
	}
	cout<<endl;
}

void rat_helper(int maze[][20],int n,int x,int y){
    
    if(x == n-1 && y == n-1){
	solution[x][y] =1;
	printSolution(n);
    solution[x][y] =0;
	return;
	}
    
    if(x<0 || y<0 || x>=n || y>=n || maze[x][y] == 0 || solution[x][y] ==1){
        return;
    }
    
    solution[x][y] = 1;
    rat_helper(maze,n,x-1,y);
    rat_helper(maze,n,x+1,y);
    rat_helper(maze,n,x,y-1);
    rat_helper(maze,n,x,y+1);
    solution[x][y] = 0;
}

void ratInAMaze(int maze[][20],int n){
    memset(solution,0,20*20*sizeof(int));
    rat_helper(maze,n,0,0);
}

int main(){

  int n; 
  cin >> n ;
  int maze[20][20];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> maze[i][j];
        }		
  }
  ratInAMaze(maze, n);
}


Sample Input 1 :
3
1 0 1
1 0 1
1 1 1

Sample Output 1 :
1 0 0 1 0 0 1 1 1

Sample Output 1 Explanation :
Only 1 path is possible

Sample Input 2 :
3
1 0 1
1 1 1
1 1 1

Sample Output 2 :
1 0 0 1 1 1 1 1 1 
1 0 0 1 0 0 1 1 1 
1 0 0 1 1 0 0 1 1 
1 0 0 1 1 1 0 0 1

Sample Output 2 Explanation :
4 paths are possible
