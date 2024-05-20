#include<iostream>
using namespace std;
int main() {
   
    float* num1 = new float;
    float* num2 = new float;

    
    cout << "Enter the first float number: ";
    cin >> *num1;

    cout << "Enter the second float number: ";
    cin >> *num2;

    float sum = *num1 + *num2;

    cout << "The sum of " << *num1 << " and " << *num2 << " is: " << sum << endl;

    delete num1;
    delete num2;


    return 0;
}
