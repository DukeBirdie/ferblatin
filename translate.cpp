#include "header.h"

class Translated: public Word {
    private:
        string word;
    public:
        Translated() {
            word = "";
        }
        // translate given word
        string translate(string &word) {
            if (word.length() <= 2) {
                return word;
            }
            // find erb
            char letter;
            int epos; // the position of e from erb in the word
            for (int i = 0; i < word.length()-1; i++) {
                if (word.substr(i, i+2) == "erb") {
                    // find previous letter
                    // clear letter + erb
                    letter = word[i-1];
                    epos = i;
                }
            }
            word = letter + word;
            word = word.substr(0, epos);

            return word;
        }
};

int main() {
    string filename = "translate.txt";
    // open file
    ifstream file;
    file.open(filename);

    string line;
    string word;
    int lineNum;

    while (!file.eof()) {
        Translated temp;
        file >> line;
        lineNum++;
        word = temp.translate(line);
        cout << word << "\t";
        lineNum %= 5;
        if (lineNum == 0) {
            cout << endl;
        }
    }

    file.close();
}