#include <iostream>
#include <list>
#include <string>

using namespace std;

int* FillArray(int* size)
{
    int* arr = new int[*size];
    for (int i = 0; i < *size; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

bool Contains(list<int>* l, int* elem)
{
    for (auto iter = (*l).begin(); iter != (*l).end(); iter++)
    {
        if (*iter == *elem)
            return true;
    }
    return false;
}

list<int>* GetIntersections(int* arr1, int* arr2, int* arrSize)
{
    list<int>* result = new list<int>;

    for (int i = 0; i < *arrSize; i++)
    {
        for (int k = 0; k < *arrSize; k++)
        {
            if (arr1[i] == arr2[k] && !Contains(result, &arr1[i]) && !Contains(result, &arr2[k]))
            {
                (*result).push_back(arr1[i]);
            }
        }
    }

    return result;
}

int* GetUnion(int* arr1, int* arr2, int* arrSize)
{
    int* result = new int[*arrSize];
    for (int i = 0; i < *arrSize; i++)
    {
        result[i] = arr1[i] + arr2[i];
    }
    return result;
}

int GetElemUnion(int* arr, int* arrSize)
{
    int total = 0;
    for (int i = 0; i < *arrSize; i++)
    {
        total += arr[i];
    }
    return total;
}

void PrintList(list<int>* l)
{
    for (auto iter = (*l).begin(); iter != (*l).end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;
}

void PrintArray(int* arr, int* arrSize)
{
    for (int i = 0; i < *arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int* size = new int(0);
    cout << "Размер массивов:" << endl;
    cin >> *size;

    cout << "Первый массив (каждый элемент в новой строке):" << endl;
    int* arr1 = FillArray(size);

    cout << "Второй массив:" << endl;
    int* arr2 = FillArray(size);

    auto inters = GetIntersections(arr1, arr2, size);
    int* un = GetUnion(arr1, arr2, size);
    cout << sizeof(*arr1) << " " << sizeof(*arr2) << endl;

    cout << "Пересечение элементов: ";
    PrintList(inters);
    delete inters;

    cout << "Объединение массивов: ";
    PrintArray(un, size);
    cout << "Объединение элементов: " << endl;
    cout << "Массив 1: " << GetElemUnion(arr1, size) << " Массив 2: " << GetElemUnion(arr2, size) << endl;

    cout << "Готово";
    delete[] arr1;
    delete[] arr2;
    delete size;
}
