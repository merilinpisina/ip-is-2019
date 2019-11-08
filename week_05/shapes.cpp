#include <iostream>

using namespace std;

int main()
{
    int height;
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        for (int k = 1, a = 1; k <= i; k++)
        {
            cout << a << " ";
            a++;
        }
        for (int j = i + 1; j <= height; j++)
        {
            cout << "* ";
            if (j > 9)
            {
                cout << " ";
            }
        }
        cout << endl
             << endl;
    }

    return 0;
}