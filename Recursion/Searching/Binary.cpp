#include<iostream>
using namespace std;
int binarySearch(int *arr, int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2; // calculate mid
        if (arr[mid] == x) return mid; // base case
        if (arr[mid] > x) return binarySearch(arr, l, mid - 1, x); // recursive case
        return binarySearch(arr, mid + 1, r, x); // recursive case
    }
    return -1; // element not found
}
int main() {
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> x;
    int result = binarySearch(arr, 0, n - 1, x); // call the function
    if (result != -1) cout << "Element found at index " << result << endl; // print the result
    else cout << "Element not found" << endl; // print the result
    return 0;
}
// // O(log n) time complexity because we are dividing the array into half in each recursive call
// // O(log n) space complexity because we are using log n stack frames
// // if we use iteration instead of recursion, we can reduce the space complexity to O(1) because we are not using any stack frames