#include <iostream>
#include <sstream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

void findRepeatedWords(string sentence) {
    unordered_map<string, int> wordCount;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        wordCount[word]++;
    }

    bool found = false;
    for (auto& pair : wordCount) {
        if (pair.second > 1) {
            cout << "Word: \"" << pair.first << "\" occurs " << pair.second << " times." << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No repeated words found." << endl;
    }
}

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    findRepeatedWords(sentence);

    return 0;
}
