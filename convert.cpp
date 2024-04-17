#include "header.h"

int main() {
    string filename = "test.txt"; // file address (in local folder)
    string writeFileName = "translate.txt";
    // open file
    ifstream file;
    ofstream writeFile;
    file.open(filename);
    writeFile.open(writeFileName); // open file to write to

    string line;
    int lineNum;

    while (!file.eof()) {
        Word temp;
        file >> line;
        lineNum++;
        line = temp.newWord(line);
        cout << line << "\t";
        lineNum %= 5;
        if (lineNum == 0) {
            cout << endl;
        }
    }

    cout << "File written." << endl;

    file.close();
    writeFile.close();
    return 0;
}

/*
    Replace the while loop in the main function with this loop to
    send converted text to the translate.txt file for translation.

    while (!file.eof()) {
        Word temp;
        file >> line;
        lineNum++;
        line = temp.newWord(line);
        writeFile << line << "\n";
    }

*/
