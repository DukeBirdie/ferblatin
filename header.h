#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

class Word {
    private:
        string word;
    public:
        Word() {
            word = "";
        }
        // get the first letter of the word
        // append beg letter + erb to end
        string newWord(string &word) {
            if (word.length() <= 2) {
                return word;
            }
            string new_word;
            char firstLetter;

            firstLetter = word[0];
            // remove first letter from word
            new_word = word + firstLetter + "erb";
            new_word.erase(0, 1);
            return new_word;
        }
};