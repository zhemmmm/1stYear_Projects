
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int totalStudents;
    
    cout << "Enter how many students: ";
    cin >> totalStudents;
    cin.ignore();
    
    ofstream outFile("student.txt");
    
    if (!outFile.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }
    
    for (int i = 1; i <= totalStudents; ++i) {
        string studentName;
        
        cout << "Enter Student " << i << ": ";
        getline(cin, studentName);
        
       
        outFile << studentName << endl;
    }
    
 
    outFile.close();
    
    cout << "Student names saved to student.txt successfully." << endl;
    
    return 0;
}

