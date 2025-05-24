/* 
recursion is a method of solving a problem where the solution depends on solutions to smaller instances of the same problem.
bigger problem is divided into smaller sub-problems
recursion is a process in which a function calls itself directly or indirectly until a base condition is met

base case: the condition under which the recursion ends
recursive case: the condition under which the recursion continues
recursive function: a function that calls itself
recursive function must have a base case to avoid infinite recursion
assumption and self working: the assumption that the recursive function will work correctly for smaller instances of the problem
*/

// Time complexity of recursion = no of recursive calls * time complexity of each call
// Time complexity if recursion = recursive relation

// FACTORIAL

#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) { // base case
        return 1;
    } else {
        return n * factorial(n - 1); // recursive case
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
// O(n) time complexity
// O(n) space complexity
// O(n) time complexity because we are making n recursive calls
// O(n) space complexity because we are using n stack frames
// if we use iteration instead of recursion, we can reduce the space complexity to O(1) beause we are not using any stack frames


// FIBONACCI

#include<iostream>
using namespace std;
int fibonacci(int n) {
    if (n == 0) { // base case
        return 0;
    } else if (n == 1) { // base case
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // recursive case
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is " << fibonacci(n) << endl;
    return 0;
}
// O(2^n) time complexity beause we are making 2 recursive calls for each call
// O(n) space complexity because we are using n stack frames
// if we use iteration instead of recursion, we can reduce the time complexity to O(n) and space complexity to O(1) because we are not using any stack frames



// sum of digits

#include<iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n >= 0 && n < 10) { // base case
        return n; // if n is a single digit number, return n
    } else {
        return n % 10 + sumOfDigits(n / 10); // recursive case 
        // n % 10 gives the last digit of n
        // n / 10 removes the last digit of n
        // for example, if n = 1234, n % 10 = 4 and n / 10 = 123
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits of " << n << " is " << sumOfDigits(n) << endl;
    return 0;
}
// O(n) time complexity because we are making n recursive calls
// O(n) space complexity because we are using n stack frames
// if we use iteration instead of recursion, we can reduce the space complexity to O(1) because we are not using any stack frames



// p^q 

#include<iostream>
using namespace std;

int power (int p, int q) {
    if (q==0) return 1; // base case
    else return p * power(p, q-1); // recursive case
    // p^q = p * p^(q-1)
    // for example, if p = 2 and q = 3, p^q = 2 * 2^2 = 2 * 4 = 8
    // if q is negative, we can use the formula p^q = 1/(p^(-q))
    // for example, if p = 2 and q = -3, p^q = 1/(2^3) = 1/8 = 0.125
}
int main() {
    int p, q;
    cout << "Enter p and q: ";
    cin >> p >> q;
    cout << p << "^" << q << " = " << power(p, q) << endl;
    return 0;
}
// O(q) time complexity because we are making q recursive calls
// O(q) space complexity because we are using q stack frames


// O(log(q)) time complexity if we use the formula p^q = (p^(q/2))^2 if q is even and p^q = p * (p^(q-1)) if q is odd
// O(1) space complexity if we use the formula p^q = (p^(q/2))^2 if q is even and p^q = p * (p^(q-1)) if q is odd
// O(log(q)) time complexity because we are making log(q) recursive calls
// O(1) space complexity because we are not using any stack frames
// if we use iteration instead of recursion, we can reduce the time complexity to O(log(q)) and space complexity to O(1) because we are not using any stack frames

#include<iostream>
using namespace std;

int power (int p, int q) {
    if (q==0) return 1; // base case
    else if (q%2==0) return power(p*p, q/2); // recursive case
    else return p * power(p, q-1); // recursive case
    // p^q = (p^(q/2))^2 if q is even and p^q = p * (p^(q-1)) if q is odd
}
int main() {
    int p, q;
    cout << "Enter p and q: ";
    cin >> p >> q;
    cout << p << "^" << q << " = " << power(p, q) << endl;
    return 0;
}



// greatest common divisor

#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (b>a) return gcd(b,a);
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main () {
    cout<<gcd(40,48);
}



// armstrong number

#include<iostream>
using namespace std;


int power (int p, int q) {
    if (q==0) return 1; // base case
    else if (q%2==0) return power(p*p, q/2); // recursive case
    else return p * power(p, q-1); // recursive case
    // p^q = (p^(q/2))^2 if q is even and p^q = p * (p^(q-1)) if q is odd
}

int f(int n, int d) {
    if (n==0) return 0;
    return power (n%10, d) + f (n/10, d);
}

int main (){
    int n;
    cin>>n;
    int digit = 0;
    int temp = n;
    while (temp > 0) {
        temp = temp/10;
        digit++;
    }
    cout<<f(n, digit);



























}