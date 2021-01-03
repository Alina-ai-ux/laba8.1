#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
// --------------------------------------------
// Функція для підрахунку “abc”
int Count(char* str)
{
    if (strlen(str) < 3) return 0;
    int k = 0;
    for (int i = 0; str[i + 2] != 0; i++)
        if (str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c') k++;
    return k;
}
// --------------------------------------------
// Функція для заміни “abc” на "**"
char* Change(char* str)
{
    if (strlen(str) < 3) return 0;
    int j = 0;
    char* tmp = new char[100];
    int i = 0;
    while ((str[i] != '\0')  && (str[i+1] != '\0')&& (str[i+2] != '\0'))
    {
        if (str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c')
        {
            tmp[j] = '*'; tmp[j + 1] = '*'; j = j + 2; i = i + 3;
        }
        else
        {
            tmp[j] = str[i];
            j = j + 1;
            i = i + 1;
        }
    }
    tmp[j] = '\0';
    printf(tmp);
    return tmp;
}
// --------------------------------------------
// Основна функція
int main()
{
    char str[100];
    char* mstr = new char[100];
    cout << "enter string:   " << endl;
    cin.getline(str, 100);
    cout << "str=" << str << endl;
    cout << "K_abc=" << Count(str) << endl;

    mstr = Change(str);
    cout << "str=" << str << endl;
    cout << "mstr=" << mstr << endl;
    for (int i = 0; i < strlen(mstr); i++);
        cout<< strlen(mstr);
    return 0;
}
