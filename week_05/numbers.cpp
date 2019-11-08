#include <iostream>
using namespace std;
int main(){

    for (int i = 1; i <= 9; i++){
        for (int j = 0; j <= 9; j++){
            if (i == j) {
                continue;
            }
            for (int k = 0; k <= 9; k++){
                if (i == k || j == k){
                    continue;
                }
                cout << i << j << k << " ";
            }
        }
    }
    cout << endl;

    return 0;
}