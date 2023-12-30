// Coding Ninjas
// Rat in a Maze Problem - I
#include <iostream>
using namespace std;
#include <vector>

bool isSafe(int x, int y, vector<vector<int>> &m, int n, vector<vector<bool>> &visited)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && (m[x][y] == 1) && (visited[x][y] != 1))
    {
        return true;
    }
    return false;
}

void solve(int x, int y, vector<vector<int>> &m, int n,
           vector<vector<bool>> &visited, vector<string> &ans, string path)
{
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
    }

    // 4 movements
    // D L R U
    visited[x][y] = 1;

    // Down
    if (isSafe(x + 1, y, m, n, visited))
    {
        solve(x + 1, y, m, n, visited, ans, path + 'D');
    }

    // Left
    if (isSafe(x, y - 1, m, n, visited))
    {
        solve(x, y - 1, m, n, visited, ans, path + 'L');
    }

    // right
    if (isSafe(x, y + 1, m, n, visited))
    {
        solve(x, y + 1, m, n, visited, ans, path + 'R');
    }

    // up
    if (isSafe(x - 1, y, m, n, visited))
    {
        solve(x - 1, y, m, n, visited, ans, path + 'U');
    }

    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    // Your code goes here
    vector<vector<bool>> visited(n, vector<bool>(n, 0));
    vector<string> ans;
    string path = "";

    if (m[0][0] == 0)
    {
        return ans;
    }

    solve(0, 0, m, n, visited, ans, path);

    return ans;
}

int main()
{
    cout << "Rat in a Maze Problem - I" << endl;
}