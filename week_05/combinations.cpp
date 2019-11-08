#include <iostream>

using namespace std;

int main()
{

    char startLetter, endLetter, skipLetter;
    int wordCount = 0;

    cin >> startLetter >> endLetter >> skipLetter;

    for (char i = startLetter; i <= endLetter; i++)
    {
        if (i == skipLetter)
        {
            continue;
        }
        for (char j = startLetter; j <= endLetter; j++)
        {
            if (j == skipLetter)
            {
                continue;
            }
            for (char k = startLetter; k <= endLetter; k++)
            {
                if (k == skipLetter)
                {
                    continue;
                }
                cout << i << j << k << ", ";
                wordCount++;
            }
        }
    }
    cout << wordCount << endl;

    return 0;
}