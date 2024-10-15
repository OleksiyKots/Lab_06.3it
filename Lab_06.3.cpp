#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

void create(int* arr, int SIZE, int MIN, int MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void Print(int* arr, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

int count(int* arr, int SIZE)
{
    int nCount = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] != 0)
        {
            nCount++;
        }
    }
    return nCount;
}

template <typename T>
void SecondCreate(T* arr, int SIZE, T MIN, T MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

template <typename T>
void SecondPrint(T* arr, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

template <typename T>
int SecondCount(T* arr, const int SIZE)
{
    int nCount = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] != 0)
        {
            nCount++;
        }
    }
    return nCount;
}

int main()
{
    srand((unsigned)time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 10;
    int MIN = -10;
    int MAX = 10;

    int* arr = new int[SIZE];

    create(arr, SIZE, MIN, MAX);
    Print(arr, SIZE);

    cout << endl;
    cout << "count = " << count(arr, SIZE) << endl;

    SecondCreate(arr, SIZE, MIN, MAX);
    SecondPrint(arr, SIZE);

    cout << endl;
    cout << "secondCount = " << SecondCount(arr, SIZE) << endl;

    delete[] arr;

    return 0;
}
