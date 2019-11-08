#include <iostream>
using namespace std;
int main()
{
    double money;
    char product;
    int count = 0;
    const char enterMall = '>', exitMall = '<';

    cin >> money;
    do
    {
        cin >> product;
    } while (product != enterMall);

    do
    {
        double currentPrice = 0;
        cin >> product;
        if (product <= 'Z' && product >= 'A')
        {
            currentPrice = product / 2.0;
        }
        else if (product <= 'z' && product >= 'a')
        {
            currentPrice = product * 0.3;
        }
        else
        {
            switch (product)
            {
            case '%':
                currentPrice = money / 2;
                break;
            case '*':
                currentPrice = -10;
                break;
            case exitMall:
                break;
            default:
                currentPrice = product;
            }
        }
        if (money >= currentPrice && product != exitMall)
        {
            money -= currentPrice;
            count++;
        }
    } while (product != exitMall);

    return 0;
}