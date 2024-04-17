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
    return 0;
}

/*

    

*/