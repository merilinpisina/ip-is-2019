// Матрица от низове
// Дадене е квадратна матрица А nxn от низове,представящи думи с максимална дължина 9.

// а)да се намери броя на палиндромите в частта над главния диагонал

// б)колко пъти думата s се среща под вторичния главен диагонал

// в)дали изричението получено от конкатенацията на думите от първичния гл.диагонал , съвпада с изречението получено от думите от вторичния гл.диагонал

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char* word){

    for (int i=0; i<strlen(word)/2;++i){
        if(word[i] != word[strlen(word)-i-1]){
            return false;
        }
    }
    return true;

}

bool areEqual (const char* str1, const char* str2){

    if (strlen(str1)!=strlen(str2)){
        return false;
    }

    int length = strlen(str1);

    for(int i=0;i<length;++i){}

    return true;
}


int main(){

    char stringMatrix[100][100][10], checkword, checksentence;
    int n;

    cin >> n;
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            cin >> stringMatrix[i][j];
        }
    }

    int count = 0;

    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            if (i<j){
                if (isPalindrome(stringMatrix[i][j])){
                    count++;
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}