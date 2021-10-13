#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int _strlen(const char* string) {
    int i = 0;
    while (!(string[i] == '\0'))
    {
        i++;
    }
    return i;
}
char* _strchr( char* string, int c) {
    int check = 0;
    for (int i = 0; i < _strlen(string); i++)
    {
        if (string[i] == c)
        {
            char* pointer = &string[i];
            cout << &pointer << endl;
            check++;
            break;
        }
    }
    if (check < 1)
    {
        return NULL;
    }
}
void NumberOfInsertion() {
    int count(0);
    int size = 0;
    char* string = new char[300];
    cout << "Enter some text" << endl;
    char input = NULL;
    for (int i = 0; input != '.'; i++) {
        cin.get(input);
        string[i] = input;
        if (string[i] == '.')
        {
            string[i + 1] = '\0';
        }
    }
    vector<int> array;
    array.push_back(0);
    for (int i = 0; i < _strlen(string); i++)
    {
        if (string[i] == ' ' && string[i + 1] < 127 && string[i + 1] > 32)
        {
            array.push_back(i);
        }
    }
    int check = 0;
    for (int i = 0; i < array.size()- 1; i++)
    {
        for (int j = array[i]; j <= array[i + 1]; j++)
        {
            if ((array[i + 1] - array[i]) < 9)
            {
                break;
            }
            if (string[i + 2] == '/' && string[i + 5] == '/')
            {
                continue;
            }
            if (!(string[j] >= 48 && string[j] <= 57))
            {
                check++;
            }
        }
        if (check == 0)
        {
            count++;
        }
    }
    cout <<  count;
}
int main()
{
    cout << "TASK 1\n";
    cout << "Enter string\n";
    char *str = new char[300];
    cin >> str;
    cout << "Enter number\n";
    int c;
    cin >> c;
    cout << "Addres : ";
    _strchr(str, c);
    cout << "TASK 2\n";
    NumberOfInsertion();
}

