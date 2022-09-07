#include <iostream>
using namespace std;

void fill_arr(int* arr, size_t k); // заполняем массив значениями от 1 до 10
void print_arr(int* arr, size_t k); // выводим массив на экран
void copy_arr(int* arr, int* arr1, size_t k); // копирование одного массива в другой
void print_copy_arr(int* arr1, size_t k); // выводим скопированный массив на экран
void opposite_arr(int* arr, int k); // противоположный порядок прохождения по массиву
void copy_opposite_arr(int* arr, int* arr1, size_t k); // копирование одного массива в другой (элементы в обратном порядке)
void show_copy_opposite_arr(int* arr1, size_t k); // выводим скопированный один массив в другой (элементы в обратном порядке)

int main()
{
    setlocale(0, "rus");

    size_t n = 10;
    int* arr = new int[n];
    int* arr1 = new int[n];

    fill_arr(arr, n);
    print_arr(arr, n);
    copy_arr(arr, arr1, n);
    print_copy_arr(arr1, n);
    opposite_arr(arr, n); 
    copy_opposite_arr(arr, arr1, n);
    show_copy_opposite_arr(arr1, n);

    delete[] arr;
    delete[] arr1;

    return 0;
}
void fill_arr(int* arr, size_t k) // заполняем массив значениями от 1 до 10
{
    for (size_t i = 0; i < k; i++)
    {
        *(arr + i) = i + 1;
    }
}
void print_arr(int* arr, size_t k) // выводим массив на экран
{
    cout << " Исходный массив чисел:\n";

    for (size_t i = 0; i < k; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << "\n\n";
}
void copy_arr(int* arr, int* arr1, size_t k) // копирование одного массива в другой
{
    for (size_t i = 0; i < k; i++)
    {
        *(arr1 + i) = *(arr + i);
    }
}
void print_copy_arr(int* arr1, size_t k) // выводим скопированный массив на экран
{
    cout << " Скопированный массив:\n";

    for (size_t i = 0; i < k; i++)
    {
        cout << *(arr1 + i) << " ";
    }
    cout << "\n\n";
}
void opposite_arr(int* arr, int k) // противоположный порядок прохождения по массиву
{
    cout << " Противоположный порядок прохождения по массиву:\n";

    for (int i = k - 1; i >= 0; i--)
    {
        cout << *(arr + i) << " ";
    }
    cout << "\n\n";
}
void copy_opposite_arr(int* arr, int* arr1, size_t k) // копирование одного массива в другой (элементы в обратном порядке)
{
    int c = 0;
    for (int i = k - 1; i >= 0; i--)
    {
        *(arr1 + c) = *(arr + i);
        c++;
    }
}
void show_copy_opposite_arr(int* arr1, size_t k) // выводим скопированный один массив в другой (элементы в обратном порядке)
{
    cout << " Скопированный массив с элементами в обратном порядке:\n";

    for (size_t i = 0; i < k; i++)
    {
        cout << *(arr1 + i) << " ";
    }
    cout << "\n\n";
}