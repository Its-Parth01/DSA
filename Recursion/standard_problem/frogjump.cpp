/* 
A frog is on the 1st step of an n-step staircase. The frog can jump either one step or two steps at a time. 
Each step has a height, and the frog pays an energy cost equal to the absolute difference of heights between the step it jumps from and the step it jumps to.
Your task is to find the minimum total energy the frog needs to reach the nth step.
A frog is on the 1st step of an n-step staircase. The frog can jump either one step or two steps at a time. 
Each step has a height, and the frog pays an energy cost equal to the absolute difference of heights between the step it jumps from and the step it jumps to.
*/


// frog jump; 10, 30, 40, 20
// mimimum cost to reach at nth from ith
// frog can move one step and two step

#include<iostream>
using namespace std;

int f( int *h, int n, int i) {
    if (i == n-1) return 0; // base case; reaches the last step
    if (i == n-2) return f(h, n, i+1) + abs(h[i] - h[i+1]); // if it reaches the second last step, it can only jump to the last step

    return min(f(h, n, i+1) + abs(h[i] - h[i+1]), f(h, n, i+2) + abs(h[i] - h[i+2])); // recursive case; it can jump to the next step or the step after that
}

int main () {
    int arr[] = {10, 30, 40, 20};
    int n = 4;
    cout<<f(arr, n, 0);
}