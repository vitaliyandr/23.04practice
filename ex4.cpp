#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str1 = "racecar";
    string str2 = "hello";
    cout << str1 << (is_palindrome(str1) ? " is" : " is not") << " a palindrome" << endl;
    cout << str2 << (is_palindrome(str2) ? " is" : " is not") << " a palindrome" << endl;
    return 0;
}
