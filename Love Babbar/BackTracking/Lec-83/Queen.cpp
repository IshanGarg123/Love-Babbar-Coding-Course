#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

void addSolution(vector<vector<int>> &board,vector<vector<int>>&ans,int n)
{
	vector<int> temp;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			temp.push_back(board[i][j]);	
		}
	}
	ans.push_back(temp);
}

bool isSafe(int row,int col,vector<vector<int>> &board,int n)
{
	// not in same row , col and diagonal
	// as we fill from left to right only check left side

	int x = row;
	int y = col;

	while(y>=0)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		y--;
	}

	x=row;
	y=col;

	while(x>=0 && y>=0)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		x--;
		y--;
	}

	x=row;
	y=col;

	while(x<n && y>=0)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		x++;
		y--;
	}
	return true;
}

void solve(int col,vector<vector<int>> &board,vector<vector<int>>&ans,int n)
{
	if(col==n)
	{
		addSolution(board,ans,n);
		return;
	}

	for(int row=0;row<n;row++)
	{
		if(isSafe(row,col,board,n))
		{
			// if placing queen is safe
			board[row][col] = 1;
			solve(col+1,board,ans,n);

			board[row][col] = 0;	
		}
	}
}

vector<vector<int>> nQueens(int n)
{
	// Write your code here
	vector<vector<int>> board(n,vector<int>(n,0));
	vector<vector<int>> ans;

	solve(0,board,ans,n);
	return ans;
}

int main()
{
    cout << "The N-Queen Problem" << endl;
    return 0;
}