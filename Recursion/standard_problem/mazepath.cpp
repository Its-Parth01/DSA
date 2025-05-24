// top left to bottom right reach
// count all possible paths
// only move in right or down in mxn grid
// from grid[0][0] to reach grid[m-1][n-1]


#include<iostream>
using namespace std;

int f(int i, int j, int m, int n) {
    if (i == m-1 and j == n-1) return 1;
    if (i >= m or j>=n) return 0;
    return f(i+1, j, m, n) + f(i, j+1, m, n);
}
int main() {
    int m, n;
    cout << "Enter the size of the grid: ";
    cin >> m >> n;
    cout << "The number of paths from top left to bottom right is: " << f(0, 0, m, n) << endl; // call the function
    return 0;
}