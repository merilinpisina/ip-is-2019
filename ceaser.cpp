// Шифърът на Цезар е метод за кодиране на съобщения, при който всяка буква от съобщението се замества с буквата на фиксиран брой позиции от него в азбуката. Например при шифър с изместване 5, всяко срещане на буквата a ще се замени с f, а всяко срещане на z - с e (т.е. ако стигнем края на азбуката, продължаваме да броим от началото). Всички останали символи, които не са букви (включително интервали и пунктуация), не се променят.

// Декодирането става по обратния път - т.е. при изместване 5, всеки символ трябва да се върне 5 позиции назад.

// Да се напишат функции:

// void encodeCaesar(char plaintext[1000], int shift, char ciphertext[1000]) - кодира даденото plaintext съобщение с изместване shift и записва резултата в ciphertext
// void decodeCaesar(char ciphertext[1000], int shift, char plaintext[1000]) - декодира даденото кодирано съобщение ciphertext с изместване shift и записва резултата в plaintext
// Не забравяйте да запишете завършваща 0 в края резултатния низ.

#include <iostream>
#include <cstring>
using namespace std;

void encodeCaesar(char plaintext[1000], int shift, char ciphertext[1000]){
    int index = 0;
    while (plaintext[index]!='\0'){
        ciphertext[index] = char(int(plaintext[index]+shift-97)%26 +97);
        ++index;
    }
    ciphertext[index] = '\0';
}

int main(){

    char start[1000], result[1000];
    int n, shift;

    memset(result, '\n', 1000);

    cin >> start;

    cin >> shift;
    
    encodeCaesar(start, shift, result);
    cout <<result << endl;


    return 0;
}