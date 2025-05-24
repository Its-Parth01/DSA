/*
Mobile Keypad Problem
Given a digit string, return all possible letter combinations that the number could represent.
A mapping of digit to letters (just like on the telephone buttons) is given below:
1: ""
2: "abc"
3: "def"
4: "ghi"
5: "jkl"
6: "mno"
7: "pqrs"
8: "tuv"
9: "wxyz"
0: " "
*/


#include <iostream>
#include <vector>
#include <string>
using namespace std;

void f(string &str, int i, string result, vector<string> &res) {
    if (i == str.length()) {
        res.push_back(result);
        return;
    }
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int digit = str[i] - '0';
    for (char c : mapping[digit]) {
        f(str, i + 1, result + c, res);
    }
}
int main() {
    string str;
    cout << "Enter a digit string: ";
    cin >> str;
    vector<string> res;
    f(str, 0, "", res);
    cout << "The possible letter combinations are: " << endl;
    for (string s : res) {
        cout << s << endl;
    }
    return 0;
}


#include <iostream>
#include <string>
using namespace std;

void printCombinations(string digits, string current, int index) {
    if (index == digits.length()) {
        cout << current << endl;
        return;
    }
    string mapping[] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz", " "};
    int digit = digits[index] - '0';
    for (char c : mapping[digit]) {
        printCombinations(digits, current + c, index + 1);
    }
}

int main() {
    string digits;
    cout << "Enter a digit string: ";
    cin >> digits;
    cout << "The possible letter combinations are: " << endl;
    printCombinations(digits, "", 0);
    return 0;
}
