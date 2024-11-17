#include <iostream>
using namespace std;
void flipping(int* ar)
{
    int n = 10;
    for (int i = 0; i < 5; i++) {
   
        int temp = *(ar + n - 1 - i);
        *(ar + n - 1 - i) = *(ar + i);
        *(ar + i) = temp;
    }
}

void print_array(int *ar)
{
    for (int i = 0; i < 10; i++)
    {
        cout << *(ar + i) << " ";
    }
}

int main()
{
    cout << "\033[2J\033[1;1H";
    int array [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Now we have such array: " << endl;
    print_array(array);
    cout << endl;
    cout << "Then we flip our array: " << endl;
    flipping(array);
    print_array(array);
}