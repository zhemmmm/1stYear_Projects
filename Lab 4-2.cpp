#include<iostream>
using namespace std;
int main() {
   
   int arrayname[5] = {10, 20, 30, 40 ,50};
   int *ptr = arrayname;
   
   for (int i = 0; i < 5; i++){
       cout << " " << endl;
       cout << " Memory location of array " << *(ptr + i) << " is: " << (ptr + i) << endl; 
   
   }
   
   int sum = 0;
    ptr = arrayname;
    
    for(int i =0; i < 5; i++){
        sum += *(ptr + i);
    }
    
    cout << " The sum of all elements are: " << sum << endl;

    return 0;
}
