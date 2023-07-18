#include <iostream>

using namespace std;
int main()
{

    int num = 97, no_of_chars = 5;
    char ch = 'A';
    for (int line = 1; line < no_of_chars; line++)
    {
        for (int i =(no_of_chars-line); i > 0; i--)
        {
            cout << " ";
        }
        int inc = (2*line)-1;
        for (int j = 0; j < inc; j++)
        {
            char ch = (char)('A' + j);
            cout << ch;
        }
        cout<<"\n";
    }
    for (int line = no_of_chars; line > 0; line--)
    {
        for (int i =(no_of_chars-line); i > 0; i--)
        {
            cout << " ";
        }
        int inc = (2*line)-1;
        for (int j = 0; j < inc; j++)
        {
            char ch = (char)('A' + j);
            cout << ch;
        }
        cout<<"\n";
    }
    return 0;
}
