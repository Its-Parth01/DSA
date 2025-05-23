// given number n; find increasing sequence of n numbers

#include<iostream>
using namespace std;

void f(int n) {
    if (n == 0) return; // base case
    f(n - 1); // recursive case
    cout << n << " "; // print the number
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    f(n); // call the function
    cout << endl;
    return 0;
}



// given number n and a value k; find k multilples of n

#include<iostream>
using namespace std;

void f(int n, int k) {
    if (k == 0) return; // base case
    f(n, k - 1); // recursive case
    cout << n * k << " "; // print the number
}
int main() {
    int n, k;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a value: ";
    cin >> k;
    f(n, k); // call the function
    cout << endl;
    return 0;
}



// given number n find sum of n natural number with alternate sign

#include<iostream>
using namespace std;

int sum (int n) {
    if (n==0) return 0;
    return sum (n-1) + ((n%2==0)? (-n) : n);
}

int main () {
    cout << sum(5) << endl;
}


