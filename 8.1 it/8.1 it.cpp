#include <iostream>
using namespace std;

int Count(char* str)
{
    if (strlen(str) < 3)
        return 0;
    int k = 0;
    for (int i = 1; str[i + 1] != 0; i++)
        if (str[i - 1] == 'a' && str[i] == 'b' && str[i + 1] == 'c')
            k++;
    return k;
}

char* Change(char* str)
{
    size_t len = strlen(str);
    if (len < 3)
        return str;
    char* tmp = new char[len * 2 / 3 + 1];
    char* t = tmp;
    tmp[0] = '\0';
    size_t i = 0;
    while (i < len && str[i + 2] != 0)
    {
        if (str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c')
        {
            strcat_s(t, len * 2 / 3 + 1, "**");
            t += 2;
            i += 3;
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
        }
    }
    *t++ = str[i++];
    *t++ = str[i++];
    *t = '\0';
    strcpy_s(str, len + 1, tmp);
    return tmp;
}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    cout << "String contained " << Count(str) << " groups of 'abc'" << endl;
    char* dest = new char[151];
    dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}