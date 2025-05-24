// rat in a maze problem
// Rat in a maze problem is a classic backtracking problem where you have to find a path from the source to the destination in a maze represented by a 2D grid.
// The rat can only move in four directions: up, down, left, and right.
// The rat can only move to cells that are not blocked (represented by 0) and can only move to cells that have not been visited yet (to avoid cycles).

#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &maze, int r, int c, string path, vector<string> &ans) {

    int n = maze.size();
    // Base case: if we reach the destination
    if (r == maze.size() - 1 && c == maze[0].size() - 1) { // r == n-1 && c == n-1
        ans.push_back(path);
        return;
    }

    // Check if the current cell is valid
    if (r < 0 || r >= maze.size() || c < 0 || c >= maze[0].size() || maze[r][c] == 0 || maze[r][c] == -1) {
        return; // Out of bounds or blocked cell
    }

    // Mark the cell as visited
    maze[r][c] = 1; // Mark as visited (or you can use a separate visited array)
    // Explore all four directions
    helper(maze, r + 1, c, path + 'D', ans); // Down
    helper(maze, r - 1, c, path + 'U', ans); // Up
    helper(maze, r, c + 1, path + 'R', ans); // Right
    helper(maze, r, c - 1, path + 'L', ans); // Left

    // Backtrack: unmark the cell
    maze[r][c] = -1; // Unmark as visited    
}

vector<string> findpath(vector<vector<int>> &maze) {

     int n = maze.size();
     vector<string> ans;
     string path = "";
     
     helper(maze, 0, 0, path, ans);
     return ans;
}

int main () {

    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> ans = findpath(maze);
    for (string path : ans) {
        cout << path << endl;
    }
    return 0;
}