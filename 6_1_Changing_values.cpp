#include <iostream>
using namespace std;
void changing(int *first, int *second)
{
    // int temp = *first;
    // *first = *second;
    // *second = temp;
    *first = *first + *second;
    *second = *first - *second;
    *first = *first - *second;
}

int main()
{
    cout << "\033[2J\033[1;1H";
    int a = 10;
    int b = 20;
    cout << "a = " << a << " b = " << b << endl;
    changing(&a, &b);
    cout << "After changing: " << endl;
    cout << "a = " << a << " b = " << b << endl;
     
}