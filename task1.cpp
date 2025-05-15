#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeFile(const string& filename) {
    ofstream outputFile(filename);

    if (outputFile.is_open()) {
        cout << "Enter data to write to '" << filename << "' (type 'END' on a new line to finish):\n";
        string line;
        while (getline(cin, line) && line != "END") {
            outputFile << line << endl;
        }
        outputFile.close();
        cout << "Data written to '" << filename << "' successfully.\n";
    } else {
        cerr << "Unable to open file '" << filename << "' for writing.\n";
    }
}

void readFile(const string& filename) {
    ifstream inputFile(filename);
    string line;

    cout << "\nContents of '" << filename << "':\n";
    if (inputFile.is_open()) {
        while (getline(inputFile, line)) {
            cout << line << endl;
        }
        inputFile.close();
    } else {
        cerr << "Unable to open file '" << filename << "' for reading.\n";
    }
}

void appendFile(const string& filename) {
    ofstream outputFile(filename, ios::app); // Open in append mode

    if (outputFile.is_open()) {
        cout << "\nEnter data to append to '" << filename << "' (type 'END' on a new line to finish):\n";
        string line;
        while (getline(cin, line) && line != "END") {
            outputFile << line << endl;
        }
        outputFile.close();
        cout << "Data appended to '" << filename << "' successfully.\n";
    } else {
        cerr << "Unable to open file '" << filename << "' for appending.\n";
    }
}

int main() {
    string filename;
    int choice;

    cout << "Enter the filename: ";
    cin >> filename;
    cin.ignore(); // Consume the newline character left by cin

    do {
        cout << "\nChoose an operation:\n";
        cout << "1. Write to file (overwrites existing content)\n";
        cout << "2. Read from file\n";
        cout << "3. Append to file\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
                cin.ignore(); // Consume the newline character

        switch (choice) {
            case 1:
                writeFile(filename);
                break;
            case 2:
                readFile(filename);
                break;
            case 3:
                appendFile(filename);
                break;
            case 4:
                cout << "Exiting application.\n";
                break;
            default:
                cerr << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
