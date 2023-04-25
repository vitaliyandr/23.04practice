#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence = "This is a sentence with seven words.";
    int word_count = 1; // Assume at least one word in sentence
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            word_count++;
        }
    }
    cout << "Number of words: " << word_count << endl;
    return 0;
}
