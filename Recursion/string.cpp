// remove "a" occurrences from string

#include <iostream>
#include <string>
using namespace std;

string f(string &s, int idx, int n) {
    if (idx == n) return; // base case
    string curr = ""; // current string
    curr += s[idx]; // add current character to current string
    return ((s[idx] == 'a') ? "" : curr) + f(s, idx + 1, n); // recursive case   
}
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    f(s, 0, s.length());
    cout << "String after removing 'a': " << s << endl;
    return 0;
}


// // O(n) time complexity because we are making n recursive calls
// // O(n) space complexity because we are using n stack frames




// Palindrome 

#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s, int start, int end) {
    if (start >= end) return true; // base case
    if (s[start] != s[end]) return false; // base case
    return isPalindrome(s, start + 1, end - 1); // recursive case
}
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if (isPalindrome(s, 0, s.length() - 1)) {
        cout << s << " is a palindrome" << endl;
    } else {
        cout << s << " is not a palindrome" << endl;
    }
    return 0;
}
// O(n) time complexity because we are making n recursive calls
// O(n) space complexity because we are using n stack frames


