#include <iostream>

using namespace std;

int main()
{

    // char start, end, skip;
    // int countWords = 0;

    // cin >> start >> end >> skip;
    // for (char i = start; i <= end; i++)
    // {
    //     if (i == skip)
    //         continue;
    //     for (char j = start; j <= end; j++)
    //     {
    //         if (j == skip)
    //             continue;

    //         for (char k = start; k <= end; k++)
    //         {
    //             if (k == skip)
    //                 continue;
    //             cout << i << j << k << ", ";
    //             countWords++;
    //         }
    //     }
    // }
    // cout << countWords << endl;


    // for (int i = 1; i <= 9; i++){
    //     for (int j = 0; j <= 9; j++){
    //         if (i == j) {
    //             continue;
    //         }
    //         for (int k = 0; k <= 9; k++){
    //             if (i == k || j == k){
    //                 continue;
    //             }
    //             cout << i << j << k << " ";
    //         }
    //     }
    // }
    // cout << endl;

    int height;

    cin >> height;

    for(int i = 1; i <= height; i++){
        for (int j = 1; j <= i; j++){
            cout << j << " ";
        }
        for (int j = i; j <= height; j++){
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}