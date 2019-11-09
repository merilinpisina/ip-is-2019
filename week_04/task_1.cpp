/*
������ 1.
�) ������ ���� �� �� ���� ��� ������.
��� � ����� �� ���� �� 1000 �� 1500 ��. �� ������ � ���-����� 3 USB �����, ���-����� 8
GB RAM � SSD ����.
��� ����� �������� ���� SSD ��� ��� ��-����� �� 8 GB RAM, ��� �� ���� �� ���� ������
�� 800 ��.
�������� ����� �����, ����� �� ���� �� ������ (������ �����), ���� USB �������
(���������� �����), ���������� RAM (���������� �����) � ���� ��� SSD (������
��������) �������� ���� ������ �� �� ���� �������.
�) �� �� ������ ��������, ����� �� �������� 4-������� ���������� ����� ���������
���� ������� �� ����� � ������� � � ���-������ ���� ������ �����.
������: 7456 -> ��
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
