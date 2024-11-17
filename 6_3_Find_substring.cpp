#include <iostream>
using namespace std;
int count_length (char *ar) {
    int i = 0;
    while (*(ar + i) != '\0') {
        i++;
    }
    return i;
}
bool find_substring(char *a, char *b)
{
    int length_a = count_length(a);
    int length_b = count_length(b);
    cout << "length_a " << length_a << endl;
    cout << "length_b " << length_b << endl;
    for (int i = 0; i < length_a - length_b; i++){
        if (*(a+i) == *b) {
            int count = 0;
            for (int j = 0; j < length_b; j++)
            {
                if (*(a + i + j) == *(b+j))
                {
                    count++;
                }
                else {
                    break;
                }
            }
            if (count == length_b) {
                return true;
            }
            
        }
    }
    return false;
}

int main()
{
    cout << "\033[2J\033[1;1H";
    char string_one[] = "Halla abracadabra!";
    char string_two[] = "cad";
    bool ans = find_substring(string_one, string_two);
    if (ans) {
        cout << "True!";
    }
    else {
        cout << "False!";
    }
   
}