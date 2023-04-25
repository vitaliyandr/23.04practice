#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello World! 12345 %$#@";
    int letter_count = 0, digit_count = 0, other_count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            letter_count++;
        }
        else if (isdigit(str[i])) {
            digit_count++;
        }
        else {
            other_count++;
        }
    }
    cout << "Letters: " << letter_count << endl;
    cout << "Digits: " << digit_count << endl;
    cout << "Other: " << other_count << endl;
    return 0;
}
