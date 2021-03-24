/*#include <iostream>
#include <cstring>
using namespace std;

//###INSERT CODE HERE -
void properNounCorrection(char str[100])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
    }
}

int main()
{

    char str[100], str1[100];
    cin.getline(str, 100);
    cout << "Chuoi ban dau: " << str;
    cout << "\nChuoi sau khi chuan hoa: ";
    properNounCorrection(str);
    cout << str;

    return 0;
}*/
#include <iostream>
#include "string.h"
using namespace std;
void func(char* s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        cout << s[i];
        if (s[i]== ' ') 
            cout << endl;
    }
}

void main()
{
    char s[] = "Goodbye to you, my trusted friend. We've know each other since we were nine or ten";
    func(s);
}