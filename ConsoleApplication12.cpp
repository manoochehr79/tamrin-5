#include <iostream>
#include <iomanip>
using namespace std;

long Fact(int num) 
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

int main() 
{
    int nums, n;
    cout << "enter khayam number : ";
    cin >> n;
    for (int i = 0; i <= n - 1; i++) 
    {
        for (int j = 0; j < n - i; j++)
            cout << "  ";
        for (int j = 0; j <= i; j++) 
        {
            if (j == 0 || j == i)
                nums = 1;
            else
                nums = Fact(i) / (Fact(j) * Fact(i - j));
            cout << setw(4) << nums;
        }
        cout << endl;
    }
    return 0;
}