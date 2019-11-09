/*
Задача 1.
а) Трайчо иска да си купи нов лаптоп.
Той е готов да даде от 1000 до 1500 лв. за лаптоп с най-малко 3 USB порта, най-малко 8
GB RAM и SSD диск.
Ако обаче лаптопът няма SSD или има по-малко от 8 GB RAM, той не иска да даде повече
от 800 лв.
Напишете булев израз, който по цена на лаптоп (реално число), брой USB портове
(естествено число), количество RAM (естествено число) и дали има SSD (булева
стойност) определя дали Трайчо ще си купи лаптопа.
б) Да се напише програма, която по въведено 4-цифрено естествено число проверява
дали първата му цифра е нечетна и е най-голяма сред всички цифри.
Пример: 7456 -> да
*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double price;
	int USBports, RAM;
	bool hasSSD;

	cout << "Enter a price for the laptop: ";
	cin >> price;
	cout << "Enter the number of USB ports: ";
	cin >> USBports;
	cout << "How much RAM does it have? ";
	cin >> RAM;
	cout << "Does it have SSD? (1/0): ";
	cin >> hasSSD;

	bool buy = (price >= 1000 && price <= 1500 && USBports >= 3 && RAM >= 8 && hasSSD) ||
			   (price <= 800 && (!hasSSD || RAM < 8));

	cout << boolalpha << buy << endl;
	 // OR:
	cout << (buy ? "Yes!\n" : "No!\n") << endl;


	//b:
	int number;
	do {
		cin >> number;
		if (number < 0) {
			number *= -1;
		}
	} while (number > 9999 || number < 1000);

	int e, d, s, h;
	e = number % 10;
	d = (number / 10) % 10;
	s = (number / 100) % 10;
	h = number / 1000;

	bool result = (h % 2 != 0) && (h > s) && (h > d) && (h > e);

	cout << boolalpha << result << endl;

	return 0;
}
