#include <bits/stdc++.h>

using namespace std;

int solution[20][20];

void printMaze(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<solution[i][j]<<" ";
        }
    }
    cout<<endl;
}
void mazeHelper(int maze[][20],int n,int x, int y)
{
    //end of matrix, print , return 
    if(x==n-1 && y==n-1)
       {
           solution[x][y]=1;
           printMaze(n);
           // not important solution[x][y]=0;
           return;
       }
    //conditions where code can not be executed
    if(x<0 || y<0 || x>n-1 || y>n-1 || solution[x][y]==1 || maze[x][y]==0)
    {
        return;
    }
    solution[x][y]=1;
    //up
    mazeHelper(maze,n,x+1,y);
    //down
    mazeHelper(maze,n,x-1,y);
    //right
    mazeHelper(maze,n,x,y+1);
    //left
    mazeHelper(maze,n,x,y-1);
    
    solution[x][y]=0;//bad me kam ajaye ye wala point
}



void ratInAMaze(int maze[][20], int n)
{
    memset(solution,0,20*20*sizeof(int));
    mazeHelper(maze,n,0,0);
}
