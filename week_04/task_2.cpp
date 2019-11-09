/*
Задача 2. Напишете програма, която по дадено въведено от потребителя
естествено число проверява дали всяка негова цифра е равна на сумата
на двете цифри, намиращи се след нея. 
Примери: 
532110 -> да (0 + 1 = 1, 1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5 - редица на Фибоначи) 
7431-> да (1 + 3 = 4, 3 + 4 = 7) 11235 -> не 98065 -> не

Задача 3. Напишете програма, която по дадени естествени числа n и k намира 
първото число, поголямо от n, на което сумата от делителите (без самото число)
е равна на k. 
Пример: n=12, k=15 -> 16 
(16 се дели на 1, 2, 4 и 8, сумата им е 15)
*/

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int number;
	bool result = true;

	do {
		cout << "Enter a number: ";
		cin >> number;
	} while (number < 100);

	while (!(number < 100) && result){
		int first, second, third;
		first = (number / 100) % 10;
		second = (number / 10) % 10;
		third = number % 10;

		if (first != second + third) {
			result = false;
			// break;
		}
		number /= 10;
	}

	cout << (result ? "Yes!" : "No!") << endl;


	int n, k;
	cin >> n >> k;
	
	for (int i = n+1; ; ++i) {
		int sum = 0;
		cout << i << endl;
		for (int j = 1; j <= i / 2; ++j) {
			if (i % j == 0) {
				cout << j << endl;
				sum += j;
			}
		}
		if (sum == k) {
			cout << i << endl;
			break;
		}
		cout << endl;
	}


	return 0;
}
