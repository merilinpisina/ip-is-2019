/*
������ 2. �������� ��������, ����� �� ������ �������� �� �����������
���������� ����� ��������� ���� ����� ������ ����� � ����� �� ������
�� ����� �����, �������� �� ���� ���. 
�������: 
532110 -> �� (0 + 1 = 1, 1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5 - ������ �� ��������) 
7431-> �� (1 + 3 = 4, 3 + 4 = 7) 11235 -> �� 98065 -> ��

������ 3. �������� ��������, ����� �� ������ ���������� ����� n � k ������ 
������� �����, �������� �� n, �� ����� ������ �� ���������� (��� ������ �����)
� ����� �� k. 
������: n=12, k=15 -> 16 
(16 �� ���� �� 1, 2, 4 � 8, ������ �� � 15)
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
