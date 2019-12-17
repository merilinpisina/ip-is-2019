// Задача 1. Да се напише програма, която въвежда матрица от цели числа с размери N × M, където N, M ≤ 100 и:

// а) сортира четните колони на матрицата във възходящ ред, а нечетните -- в низходящ ред;

// б) извежда произведението на най-голямото нечетно число в матрицата с най-малкото четно (ако такива няма, извежда 0).

#include <iostream>
using namespace std;

//bool (*predicate)(int *, int *);

bool higher(int *a, int *b)
{
    return *a > *b;
}

bool lower(int *a, int *b)
{
    return *a < *b;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort(bool pred(int *, int *), int *row, int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (pred(&row[j], &row[j + 1]))
            {
                swap(&row[j], &row[j + 1]);
            }
        }
    }
}

int main()
{

    int n, m, matrix[100][100];
    int biggestOdd = -1000000, smallestEven = 1000000;

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] % 2 == 0 && matrix[i][j] <= smallestEven && matrix[i][j] != 0)
            {
                smallestEven = matrix[i][j];
            }
            if (matrix[i][j] % 2 != 0 && matrix[i][j] >= biggestOdd && matrix[i][j] != 0)
            {
                biggestOdd = matrix[i][j];
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            sort(higher, matrix[i], m);
            continue;
        }
        sort(lower, matrix[i], n);
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << smallestEven * biggestOdd << endl;

    return 0;
}