#include <bits/stdc++.h>

using namespace std;

int board[11][11];
bool isPossible(int n,int row,int col)
{
    //checking vertically
    //if there is any queen present vertically at above rows
    for(int i=row-1;i>=0;i--)
    {
        if(board[i][col]==1)
            return false;
    }
    //check left diagnolly if there is any queen present. return false if present
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
    {
        if(board[i][j]==1)
            return false;
    }
    //check if any queen is present at right diagnol
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++)
    {
        if(board[i][j]==1)
            return false;
    }
    //if all those three condition are false then return true
    return true;
}
void nQueenHelper(int n,int row)
{
    if(row == n)
    { //we have reached some solution
        //print matrix
        //return
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<board[i][j]<<" ";
        }
        cout<<endl;
        return;
    }
    //place at all possible positions
    //and move to smaller problem
    for(int col=0;col<n;col++)
    {
        if(isPossible(n,row,col))
        {
            board[row][col]=1;
            nQueenHelper(n,row+1);
            board[row][col]=0;
        }
    }
    return;
}
void placeNQueens(int n)
{
    memset(board,0,11*11*sizeof(int));
    nQueenHelper(n,0);
}
int main()
{
    int n;
    cin>>n;
    placeNQueens(n);
    return 0;
}
