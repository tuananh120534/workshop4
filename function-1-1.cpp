#include <iostream>
using namespace std;
int *readNumbers() {
int  x;

int *arr = new int(10);
for (int i = 0; i < 10; i++)
{
    
    cin>>arr[i];
}
return arr;
}
void printNumbers(int *numbers,int length) {
    for (int i = 0; i < length; i++)
    {
        cout << i << " " << numbers[i] << "\n";
    }
    
}