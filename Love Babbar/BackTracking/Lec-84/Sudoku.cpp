#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

bool isSafe(int row,int col,int val,vector<vector<int>>& board)
{
    for(int i=0;i<9;i++)
    {
        if(board[row][i] == val)
        {
            return false;
        }   
        if(board[i][col] == val)
        {
            return false;
        }
        if(board[3*(row/3) + i/3][3*(col/3) + i%3] == val)
        {
            return false;
        }
    }
    return true;
}

bool solve(vector<vector<int>>& board)
{
    int n = 9;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(board[i][j]==0)
            {
                for(int k=1;k<=9;k++)
                {
                    if(isSafe(i,j,k,board))
                    {
                        board[i][j] = k;
                        bool aggeSolnPossiblehai = solve(board);
                        if(aggeSolnPossiblehai)
                        {
                            return true;
                        } 
                        else {
                          board[i][j] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}



void solveSudoku(vector<vector<int>>& sudoku)
{
	// Write your code here
    // No need to print the final sudoku
    // Just fill the values in the given matrix
    solve(sudoku);
}

int main()
{
    cout << "Sudoku Solver Problem" << endl;
    return 0;
}
