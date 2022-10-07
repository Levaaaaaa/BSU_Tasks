﻿// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>;

using std::cout;
using std::cin;
using std::vector;

/*1. Дан массив целых чисел, 
в котором все числа кроме одного встречаются четное количество раз, 
одно число встречается нечетное количество раз. 
Найти это число. */

int quantityOfNumber(vector<int>, int);

int main()
{
    int size;

    cout << "Enter size of vector ";
    cin >> size;

    vector<int> vector(size);

    cout << "Enter elements of vector ";
    for (size_t i = 0; i < size; i++)
    {
        cin >> vector[i];
    }

    for (size_t i = 0; i < size; i++)
    {
        int count = quantityOfNumber(vector, vector[i]);

        if (count % 2 == 1)
        {
            cout << "Result is " << vector[i];
            break;
        }
    }

    return 0;
}

int quantityOfNumber(vector<int> vec, int num) 
{
    int result = 0;

    for (int i : vec)
    {
        if (i == num)
        {
            result++;
        }
    }

    return result;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
