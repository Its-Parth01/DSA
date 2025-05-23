// print array elements using recursion

#include<iostream>
using namespace std;

void print (int *arr, int index, int n) {
    if (index == n) return; // base case
    cout << arr[index] << " "; // print the element at index
    print(arr, index + 1, n); // recursive case
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The elements of the array are: ";
    print(arr, 0, n); // call the function
    return 0;
}
// // O(n) time complexity because we are making n recursive calls
// // O(n) space complexity because we are using n stack frames

// another way to print array elements using recursion
#include<iostream>
using namespace std;
void print (int *arr, int n) {
    if (n == 0) return; // base case
    print(arr, n - 1); // recursive case
    cout << arr[n - 1] << " "; // print the element at index
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The elements of the array are: ";
    print(arr, n); // call the function
    return 0;
}




// maximum element in an array using recursion
#include<iostream>
using namespace std; 
int max (int *arr, int n) {
    if (n == 1) return arr[0]; // base case
    else return max(arr, n - 1) > arr[n - 1] ? max(arr, n - 1) : arr[n - 1]; // recursive case
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The maximum element in the array is: " << max(arr, n) << endl; // call the function
    return 0;
}
// // O(n) time complexity because we are making n recursive calls
// // O(n) space complexity because we are using n stack frames

// another way to find maximum element in an array using recursion
#include<iostream>
using namespace std;

int max (int *arr, int idx, int n) {
    if (idx == n-1) return arr[idx]; // base case
    else return max(arr[idx], max(arr, idx + 1, n)); // recursive case
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The maximum element in the array is: " << max(arr, 0, n) << endl; // call the function
    return 0;
}




// sum of elements in an array using recursion

#include<iostream>
using namespace std;

int sum (int *arr, int n) {
    if (n == 0) return 0; // base case
    else return arr[n - 1] + sum(arr, n - 1); // recursive case
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The sum of the elements in the array is: " << sum(arr, n) << endl; // call the function
    return 0;
}
// O(n) time complexity because we are making n recursive calls
// O(n) space complexity because we are using n stack frames

// another way to find sum of elements in an array using recursion
#include<iostream>
using namespace std;
int sum (int *arr, int idx, int n) {
    if (idx == n-1) return 0; // base case // idx == n-1 means we have reached the last element of the array
    // if (idx == n) return 0; // base case // idx == n means we have reached the end of the array
    else return arr[idx] + sum(arr, idx + 1, n); // recursive case
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The sum of the elements in the array is: " << sum(arr, 0, n) << endl; // call the function
    return 0;
}