#include<iostream> 
using namespace std;

int main()
{
    char s[100];
    int sh = 0;

    cout << "Enter a string: ";
    cin.get(s, 99);

    for (int i = 0; s[i]; i++) 
    {
        if (s[i] == ' ')
            sh++;
    }
    cout << "Number of words: " << sh + 1 << "\n";
    return 0;

}