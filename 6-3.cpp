#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string line;
    
    // Open lyricsoriginal.txt for reading
    ifstream originalFile("lyricsoriginal.txt");
    
    if (!originalFile.is_open()) {
        cerr << "Error opening lyricsoriginal.txt" << endl;
        return 1;
    }
    
    // Print contents of lyricsoriginal.txt
    cout << "Contents of lyricsoriginal.txt:" << endl;
    while (getline(originalFile, line)) {
        cout << line << endl;
    }
    originalFile.close(); // Close the file
    
    // Open lyricsprocessed.txt for writing
    ofstream processedFile("lyricsprocessed.txt");
    
    if (!processedFile.is_open()) {
        cerr << "Error opening lyricsprocessed.txt" << endl;
        return 1;
    }
    
    // Open lyricsoriginal.txt again to convert to uppercase and write to lyricsprocessed.txt
    originalFile.open("lyricsoriginal.txt");
    
    while (getline(originalFile, line)) {
        // Convert line to uppercase
        for (char &c : line) {
            c = toupper(c);
        }
        // Write uppercase line to lyricsprocessed.txt
        processedFile << line << endl;
    }
    originalFile.close(); // Close the file
    processedFile.close(); // Close the file
    
    cout << "Contents of lyricsoriginal.txt converted to uppercase and saved to lyricsprocessed.txt" << endl;
    
    return 0;
}
