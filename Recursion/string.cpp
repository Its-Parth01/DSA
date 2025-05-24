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



// subsequence of a string

#include <iostream>
#include <string>
using namespace std;

void printSubsequences(string s, string curr, int index) {
    if (index == s.length()) {
        cout << curr << " "; // print the current subsequence
        return;
    }
    // include the current character in the subsequence
    printSubsequences(s, curr + s[index], index + 1);
    // exclude the current character from the subsequence
    printSubsequences(s, curr, index + 1);
}
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "The subsequences of the string are: ";
    printSubsequences(s, "", 0); // call the function
    cout << endl;
    return 0;
}

// O(2^n) time complexity because we are making 2^n recursive calls
// O(n) space complexity because we are using n stack frames
