#include <iostream>
using namespace std;

int main()
{
    int studentNum;
    char str[300];
    
    FILE *fp = NULL;
    fp = fopen ("C:\\Users\\mapad\\OneDrive\\Desktop\\student.text", "w");
    
    cout << "Enter how many students: ";
    cin>> studentNum;
    cin.ignore();
    
    cout << "Student 1: " ;
    cin.getline(str,300);
    
    fprintf(fp, "Student 1: %s", str);

    cout << "Student 2: " ;
    cin.getline(str,300);
    
    fprintf(fp, "\nStudent 2: %s", str);
    
    cout << "Student 3: ";
    cin.getline(str,300);
    
    fprintf(fp, "\nStudent 3: %s", str);
    
    
    fclose(fp);
    
  
    
    
    return 0;
}
