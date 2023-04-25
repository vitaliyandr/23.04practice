#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello World! This is a string with spaces.";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            str[i] = '\t';
        }
    }
    cout << str << endl;
    return 0;
}
