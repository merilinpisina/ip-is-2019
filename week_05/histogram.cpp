#include <iostream>

using namespace std;

/*
Дадени са n цели числа в интервала [1 … 1000]. От тях някакъв 
процент p1 са под 200, процент p2 са от 200 до 399, процент p3
са от 400 до 599, процент p4 са от 600 до 799 и останалите p5 
процента са от 800 нагоре. Да се напише програма, 
която изчислява и отпечатва процентите p1, p2, p3, p4 и p5.
*/

int main()
{

    double p1, p2, p3, p4, p5;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int value;
        cin >> value;
        if (value < 200)
        {
            c1++;
        }
        else if (value < 400)
        {
            c2++;
        }
        else if (value < 600)
        {
            c3++;
        }
        else if (value < 800)
        {
            c4++;
        }
        else
        {
            c5++;
        }
    }

    p1 = double(c1) / double(n) * 100.0;
    p2 = double(c2) / double(n) * 100.0;
    p3 = double(c3) / double(n) * 100.0;
    p4 = double(c4) / double(n) * 100.0;
    p5 = double(c5) / double(n) * 100.0;
    
    // Unformatted output - we should use 
    // #include <iomanip> and then 
    // cout << std::fixed << std::setprecision(2) << p1;
    cout << p1 << "% " << p2 << "% " << p3 << "% " << p4 << "% " << p5 << "%" << endl;

    // We draw the histogram here
    for (int i = 1; i <= 5; i++)
    {
        cout << "--";
    }
    cout << "-" << endl;
    for (int i = 10; i >= 1; i--)
    {
        cout << "|";
        if (p1 >= i * 10.0 - 5)
            cout << "*"
                 << " ";
        else
            cout << "  ";
        if (p2 >= i * 10.0 - 5)
            cout << "*"
                 << " ";
        else
            cout << "  ";
        if (p3 >= i * 10.0 - 5)
            cout << "*"
                 << " ";
        else
            cout << "  ";
        if (p4 >= i * 10.0 - 5)
            cout << "*"
                 << " ";
        else
            cout << "  ";
        if (p5 >= i * 10.0 - 5)
            cout << "*";
        else
            cout << " ";
        cout << "|";
        cout << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        cout << "--";
    }
    cout << "-" << endl;

    return 0;
}