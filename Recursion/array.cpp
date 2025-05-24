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






// target value x in an array using recursion

#include<iostream>
using namespace std;

bool findTarget(int *arr, int n, int target) {
    if (n == 0) return false; // base case
    if (arr[n - 1] == target) return true; // check if the last element is the target
    return findTarget(arr, n - 1, target); // recursive case
}
int main() {
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target value: ";
    cin >> target;
    if (findTarget(arr, n, target)) cout << "Target found" << endl; // call the function
    else cout << "Target not found" << endl;
    return 0;
}
// O(n) time complexity because we are making n recursive calls
// O(n) space complexity because we are using n stack frames


// another way to find target value in an array using recursion
#include<iostream>
using namespace std;

bool findTarget(int *arr, int idx, int n, int target) {
    if (idx == n) return false; // base case
    if (arr[idx] == target) return true; // check if the current element is the target
    return findTarget(arr, idx + 1, n, target); // recursive case
}
int main () 
{
    int arr[] = {1,6,8,3,2,5,4,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    if (findTarget(arr, 0, n, target)) cout << "Target found" << endl; // call the function
    else cout << "Target not found" << endl;

    return 0;
}




// Print sums of all subsets of an array using recursion

#include <iostream>
using namespace std;

void printSubsets(int *arr, int n, int index, int sum) {
    if (index == n) {
        cout << sum << " "; // print the sum of the subset
        return;
    }
    // include the current element in the subset
    printSubsets(arr, n, index + 1, sum + arr[index]);
    // exclude the current element from the subset
    printSubsets(arr, n, index + 1, sum);
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
    cout << "The sums of all subsets of the array are: ";
    printSubsets(arr, n, 0, 0); // call the function
    cout << endl;
    return 0;
}
// O(2^n) time complexity because we are making 2^n recursive calls
// O(n) space complexity because we are using n stack frames





// print subsets of an array using recursion

#include <iostream>
#include <vector>
using namespace std;

void printSubsets(int *arr, int n, int index, vector<int> &result) {
    if (index == n) {
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " "; // print the subset
        }
        cout << endl;
        return;
    }
    // include the current element in the subset
    result.push_back(arr[index]);
    printSubsets(arr, n, index + 1, result);
    // exclude the current element from the subset
    result.pop_back();
    printSubsets(arr, n, index + 1, result);
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
    vector<int> result;
    cout << "The subsets of the array are: " << endl;
    printSubsets(arr, n, 0, result); // call the function
    return 0;
}
// O(2^n) time complexity because we are making 2^n recursive calls
// O(n) space complexity because we are using n stack frames




// another way to print sums of all subsets of an array using recursion

#include <iostream>
#include <vector>
using namespace std;

void printSubsets(int *arr, int n, int index, int sum, vector<int> &result) {
    if (index == n) {
        result.push_back(sum); // add the sum of the subset to the vector
        return;
    }
    // include the current element in the subset
    printSubsets(arr, n, index + 1, sum + arr[index], result);
    // exclude the current element from the subset
    printSubsets(arr, n, index + 1, sum, result);
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
    vector<int> result;
    printSubsets(arr, n, 0, 0, result); // call the function
    cout << "The sums of all subsets of the array are: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " "; // print the sums
    }
    cout << endl;
    return 0;
}
// O(2^n) time complexity because we are making 2^n recursive calls
// O(n) space complexity because we are using n stack frames




// print all subsets containing duplicate elements using recursion

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printSubsets(int *arr, int n, int index, vector<int> &result) {
    if (index == n) {
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " "; // print the subset
        }
        cout << endl;
        return;
    }
    // include the current element in the subset
    result.push_back(arr[index]);
    printSubsets(arr, n, index + 1, result);
    // exclude the current element from the subset
    result.pop_back();
    printSubsets(arr, n, index + 1, result);
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
    sort(arr, arr + n); // sort the array to handle duplicates
    vector<int> result;
    cout << "The subsets of the array are: " << endl;
    printSubsets(arr, n, 0, result); // call the function
    return 0;
}







// check if an array is sorted using recursion

#include <iostream>
using namespace std;
bool isSorted(int *arr, int n) {
    if (n == 1) return true; // base case
    if (arr[n - 1] < arr[n - 2]) return false; // check if the last element is less than the second last element
    return isSorted(arr, n - 1); // recursive case
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
    if (isSorted(arr, n)) cout << "Array is sorted" << endl; // call the function
    else cout << "Array is not sorted" << endl;
    return 0;
}
// O(n) time complexity because we are making n recursive calls
// O(n) space complexity because we are using n stack frames

// another way to check if an array is sorted using recursion
#include <iostream> 
using namespace std;
bool isSorted(int *arr, int idx, int n) {
    if (idx == n - 1) return true; // base case
    if (arr[idx] > arr[idx + 1]) return false; // check if the current element is greater than the next element
    return isSorted(arr, idx + 1, n); // recursive case
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
    if (isSorted(arr, 0, n)) cout << "Array is sorted" << endl; // call the function
    else cout << "Array is not sorted" << endl;
    return 0;
}
// O(n) time complexity because we are making n recursive calls
// O(n) space complexity because we are using n stack frames

// another way to check if an array is sorted using recursion
#include <iostream>
using namespace std;
bool isSorted(int *arr, int n) {
    if (n == 1) return true; // base case
    if (arr[0] > arr[1]) return false; // check if the first element is greater than the second element
    return isSorted(arr + 1, n - 1); // recursive case
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
    if (isSorted(arr, n)) cout << "Array is sorted" << endl; // call the function
    else cout << "Array is not sorted" << endl;
    return 0;
}
// O(n) time complexity because we are making n recursive calls
// O(n) space complexity because we are using n stack frames