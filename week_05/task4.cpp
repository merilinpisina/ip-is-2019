#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int number;
    cin >> number;

    if (abs(number) < 10)
    {
        cout << "No" << endl;
        return 0;
    }

    number = abs(number);

    while (number > 0)
    {
        int current = number % 10;
        int copynumber = number / 10;
        number = number / 10;
        while (copynumber > 0)
        {
            if (copynumber % 10 == current)
            {
                cout << "Yes" << endl;
                return 0;
            }
            copynumber = copynumber / 10;
        }
    }
    cout << "No" << endl;

    return 0;
}