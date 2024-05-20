#include<iostream>
using namespace std;
int main() {
    
    float num1, num2;

    cout << "Enter the first float number: ";
    cin >> num1;

    cout << "Enter the second float number: ";
    cin >> num2;

    float *ptr1 = &num1;
    float *ptr2 = &num2;

    float sum = *ptr1 + *ptr2;

    cout << "The sum of " << *ptr1 << " and " << *ptr2 << " is: " << sum << endl;

    return 0;
}
